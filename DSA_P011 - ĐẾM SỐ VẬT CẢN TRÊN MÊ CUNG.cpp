#include <bits/stdc++.h>
using namespace std;

int n, m, cnt = 0;
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
char a[1001][1001];

void spread(int i, int j){
    a[i][j] = '.';
    for (int k = 0; k < 4; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] == '#'){
            spread(i1, j1);
        }
    }
}   

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (a[i][j] == '#'){
                ++cnt;
                spread(i, j);
            }
        }
    }
    cout << cnt;
    return 0;
}