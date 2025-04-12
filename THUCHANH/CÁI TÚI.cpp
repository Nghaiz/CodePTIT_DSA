#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n, s;
        cin >> n >> s;
        int w[n + 5], v[n + 5];
        for (int i = 1; i <= n; i++) cin >> w[i];
        for (int i = 1; i <= n; i++) cin >> v[i];

        vector<int> dp(n + 1, 0);
        for (int i = 1; i <= n; i++){
            for (int j = s; j >= w[i]; j--){
                dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
            }
        }
        cout << dp[s] << "\n";
    }
    return 0;
}