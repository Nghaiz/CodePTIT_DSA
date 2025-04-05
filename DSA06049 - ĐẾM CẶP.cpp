#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int &x : a) cin >> x;
        sort(a, a + n);

        long long ans = 0;
        for (int i = 0; i < n; i++){
            int *it = lower_bound(a + i + 1, a + n, k + a[i]);
            --it;
            ans += (it - a) - i;
        }
        cout << ans << "\n";
    }
    return 0;
}