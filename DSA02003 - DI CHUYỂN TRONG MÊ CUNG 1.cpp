#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int t, n, flag;
vector<vector<int>> v;
int dx[2] = {1, 0};
int dy[2] = {0, 1};
string s;

void Try(int i, int j){
    if (i == n - 1 && j == n - 1){
        flag = 0;
        cout << s << " ";
        return;
    }
    for (int k = 0; k < 2; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < n && v[i1][j1] == 1){
            if (k == 0) s += 'D';
            else s += 'R';
            Try(i1, j1);

            s.pop_back();
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while (t--){
        flag = 1;
        s = "";
        v.clear();

        cin >> n;
        v.resize(n, vector<int>(n));
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cin >> v[i][j];
            }
        }
        if (v[0][0] == 0) {
            cout << "-1\n";
            continue;
        }
        else Try(0, 0);
        if (flag) cout << -1;
        cout << "\n";
    }
    return 0;
}