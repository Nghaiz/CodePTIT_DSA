#include <bits/stdc++.h>
#define ll long long
using namespace std;

char solve(string s, ll n) {
    ll len = s.length();

    if (n <= len) return s[n - 1];

    ll k = 0, cur_len = len;
    while (cur_len < n) {
        k++;
        if (cur_len > (1e18 / 2)) break;
        cur_len *= 2;
    }
    
    for (ll i = k; i > 0; i--) {
        ll half_len = (1ll << (i - 1)) * len;
        
        if (n <= half_len) continue;
        else {
            n = n - half_len;
            
            if (n == 1) n = half_len;
            else n = n - 1;
        }
    }
    return s[(n - 1) % len];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        string s;
        ll n;
        cin >> s >> n;
        cout << solve(s, n) << "\n";
    }
    return 0;
}