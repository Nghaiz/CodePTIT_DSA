#include <bits/stdc++.h>
using namespace std;

void solve(){
    int cnt[100001] = {0};
    int n, k, x, tmp, ans = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        cin >> x;
        tmp = k - x;
        if (tmp >= 0){
            ans += cnt[tmp];
            cnt[x]++;
        }
    }
    cout << ans << "\n";
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