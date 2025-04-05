#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n, flag = 1;
        cin >> n;
        unordered_map<int, int> mp;
        int a[n];
        for (int &x : a){
            cin >> x;
            mp[x]++;
        }
        for (int x : a){
            if (mp[x] > 1){
                cout << x << "\n";
                flag = 0;
                break;
            }
        }
        if (flag) cout << "NO\n";
    }
    return 0;
}