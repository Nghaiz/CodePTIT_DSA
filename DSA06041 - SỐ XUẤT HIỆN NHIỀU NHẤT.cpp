#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    unordered_map<int, int> mp;
    cin >> n;
    int a[n];
    for (int &x : a){
        cin >> x;
        mp[x]++;
    }
    int max_fre = INT_MIN, val = 0;
    for (int x : a){
        if (mp[x] > max_fre){
            max_fre = mp[x];
            val = x;
        }
    }
    if (max_fre > n / 2) cout << val << "\n";
    else cout << "NO\n";
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