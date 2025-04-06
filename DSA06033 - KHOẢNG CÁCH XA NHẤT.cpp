#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, ans = -1;
    cin >> n;
    pair<int, int> a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }
    sort(a, a + n);

    int val = a[0].first, furthest_idx = a[0].second;
    for (int i = 1; i < n; i++){
        if (a[i].first > val){
            ans = max(ans, a[i].second - furthest_idx);
        }
        if (a[i].second < furthest_idx){
            furthest_idx = a[i].second;
            val = a[i].first;
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