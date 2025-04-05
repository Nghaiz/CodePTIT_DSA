#include <bits/stdc++.h>
using namespace std;

int cnt[100005];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n, x, l = INT_MAX, r = INT_MIN, ans = 0;
        memset(cnt, 0, sizeof(cnt));
        cin >> n;
        for (int i = 0; i < n; i++){
            cin >> x;
            cnt[x] = 1;

            l = min(l, x);
            r = max(r, x);
        } 
        for (int i = l; i <= r; i++){
            ans += 1 - cnt[i];
        }
        cout << ans << "\n";
    }
    return 0;
}