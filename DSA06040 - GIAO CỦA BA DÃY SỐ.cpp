#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n, m, p;
        cin >> n >> m >> p;
        ll a[n], b[m], c[p];
        for (ll &x : a) cin >> x;
        for (ll &x : c) cin >> x;
        for (ll &x : b) cin >> x;

        vector<int> ans;
        int i = 0, j = 0, k = 0;
        while (i < n && j < m && k < p){
            if (a[i] == b[j] && a[i] == c[k]){
                ans.push_back(a[i]);
                ++i; ++j; ++k;
            }
            else if (a[i] < b[j]) ++i;
            else if (b[j] < c[k]) ++j;
            else ++k;
        }
        if (ans.empty()) cout << "-1\n";
        else {
            for (int x : ans) cout << x << " ";
            cout << "\n";
        }
    }
    return 0;
}