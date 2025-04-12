#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

ll powMod(ll n, ll k){
    if (k == 0) return 1;
    ll x = powMod(n, k / 2);
    if (k % 2 == 0) return (x * x) % MOD;
    return (n * ((x * x) % MOD)) % MOD;
}

ll rev(ll n){
    ll res = 0;
    while (n){
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        cout << powMod(n, rev(n)) << "\n";
    }
    return 0;
}