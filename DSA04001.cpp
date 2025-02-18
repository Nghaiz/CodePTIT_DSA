#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

ll powMod(ll a, ll b){
    ll res = 1;
    while (b){
        if (b & 1){
            res *= a;
            res %= MOD;
        }
        a *= a;
        a %= MOD;
        b >>= 1;
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        ll n, k;
        cin >> n >> k;
        cout << powMod(n, k) << "\n";
    }
    return 0;
}