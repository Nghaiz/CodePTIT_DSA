#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

ll f[2][2], d[2][2];

void init(){
    f[0][0] = f[0][1] = f[1][0] = 1; f[1][1] = 0;
    d[0][0] = d[0][1] = d[1][0] = 1; d[1][1] = 0;
}

void multiply(ll a[2][2], ll b[2][2]){
    ll x = (a[0][0] * b[0][0] % MOD + a[0][1] * b[1][0] % MOD) % MOD;
    ll y = (a[0][0] * b[0][1] % MOD + a[0][1] * b[1][1] % MOD) % MOD;
    ll z = (a[1][0] * b[0][0] % MOD + a[1][1] * b[1][0] % MOD) % MOD;
    ll t = (a[1][0] * b[0][1] % MOD + a[1][1] * b[1][1] % MOD) % MOD;
    f[0][0] = x, f[0][1] = y, f[1][0] = z, f[1][1] = t;
}

void powMod(ll f[2][2], int n){
    if (n <= 1) return;
    powMod(f, n / 2);
    multiply(f, f);
    if (n & 1) multiply(f, d);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        init();
        powMod(f, n - 1);
        cout << f[0][0] << "\n";
    }
    return 0;
}