#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

void solve(){
    string a, b;
    cin >> a >> b;
    int n = a.size(), m = b.size();
    int f[n + 1][m + 1];
    for (int i = 0; i <= n; i++){   
        for (int j = 0; j <= m; j++){
            if (i == 0){
                f[i][j] = j;
            }
            else if (j == 0){
                f[i][j] = i;
            }
            else if (a[i - 1] == b[j - 1]){
                f[i][j] = f[i - 1][j - 1];
            }
            else {
                f[i][j] = min({f[i - 1][j], f[i][j - 1], f[i - 1][j - 1]}) + 1;
            }
        }
    }
    cout << f[n][m] << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}