#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int t, n = 8, ans, sum, cot[10], xuoi[20], nguoc[20], a[10][10];

void Try(int i){
    for (int j = 1; j <= n; j++){
        if (cot[j] == 0 && xuoi[i - j + n] == 0 && nguoc[i + j - 1] == 0){
            sum += a[i][j];
            cot[j] = xuoi[i - j + n] = nguoc[i + j - 1] = 1;

            if (i == n) ans = max(ans, sum);
            else Try(i + 1);
            
            sum -= a[i][j];
            cot[j] = xuoi[i - j + n] = nguoc[i + j - 1] = 0;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while (t--){
        ans = -1e9, sum = 0;

        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= n; j++){
                cin >> a[i][j];
            }
        }
        Try(1);
        cout << ans << "\n";
    }
    return 0;
}