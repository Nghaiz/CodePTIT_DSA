#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        ll n, k, cnt = 0;
        cin >> n >> k;
        ll a[n];
        for (ll &x : a) cin >> x;
        sort(a, a + n);

        for (int i = 0; i < n - 2; i++){
            int l = i + 1, r = n - 1;
            while (l < r){
                if (a[i] + a[l] + a[r] < k){
                    cnt += r - l; 
                    ++l;
                }
                else --r;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}