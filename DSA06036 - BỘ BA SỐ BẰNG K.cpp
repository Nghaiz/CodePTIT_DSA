#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    sort(a, a + n);

    for (int i = 0; i < n - 2; i++){
        int l = i + 1, r = n - 1;
        while (l < r){
            int sum = a[i] + a[l] + a[r];
            if (sum == k){
                cout << "YES\n";
                return;
            }
            else if (sum < k) ++l;
            else --r;
        }
    }
    cout << "NO\n";
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