#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int t, n, m, ans;
vector<vector<int>> v;
int dx[2] = {1, 0};
int dy[2] = {0, 1};

void init(){
    ans = 0;
    v.clear();

    cin >> n >> m;
    v.resize(n, vector<int>(m));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> v[i][j];
        }
    }
}

void Try(int i, int j){
    if (i == n - 1 && j == m - 1){
        ++ans;
        return;
    }
    for (int k = 0; k < 2; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m){
            Try(i1, j1);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while (t--){
        init();
        Try(0, 0);
        cout << ans << "\n";
    }
    return 0;
}