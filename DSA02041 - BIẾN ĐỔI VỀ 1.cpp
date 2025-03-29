#include <bits/stdc++.h>
using namespace std;

int MAX = 100001;
vector<int> dp(MAX);

void init(){
    dp[1] = 0;
    for (int i = 2; i < MAX; i++){
        //Giam 1 don vi
        dp[i] = dp[i - 1] + 1;

        if (i % 2 == 0) dp[i] = min(dp[i], dp[i / 2] + 1);

        if (i % 3 == 0) dp[i] = min(dp[i], dp[i / 3] + 1);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    init();
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        cout << dp[n] << "\n";
    }
    return 0;
}