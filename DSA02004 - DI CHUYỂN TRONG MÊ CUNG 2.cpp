#include <bits/stdc++.h>
using namespace std;

int t, n, flag, a[10][10];
int dx[4] = {1, 0, 0, -1};
int dy[4] = {0, -1, 1, 0};
string s, path = "DLRU";

void init(){
    flag = 1;
    s = "";
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
}

void Try(int i, int j){
    if (i == n - 1 && j == n - 1){
        flag = 0;
        cout << s << " ";
        return;
    }
    for (int k = 0; k < 4; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < n && a[i1][j1] == 1){
            s += path[k];
            a[i1][j1] = 0;

            Try(i1, j1);

            s.pop_back();
            a[i1][j1] = 1;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while (t--){
        init();
        if (a[0][0] == 1){
            a[0][0] = 0;
            Try(0, 0);
        }
        if (flag) cout << -1;
        cout << "\n";
    }
    return 0;
}