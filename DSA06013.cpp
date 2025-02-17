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
        int n, x, tmp;
        cin >> n >> x;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++){
            cin >> tmp;
            mp[tmp]++;
        }
        cout << (mp[x] ? mp[x] : -1) << "\n";
    }
    return 0;
}