#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k, x;
    long long ans = 0;
    unordered_map<int, int> mp;
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        cin >> x;
        int tmp = k - x;
        ans += mp[tmp];
        mp[x]++;
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