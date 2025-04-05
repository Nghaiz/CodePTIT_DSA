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
        int n;
        cin >> n;
        vector<int> v;
        int a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
            v.push_back(a[i]);
        }
        sort(a, a + n);
        
        int l = 0, r = n - 1;
        while (a[l] == v[l]) ++l;
        while (a[r] == v[r]) --r;

        cout << l + 1 << " " << r + 1 << "\n";
    }
    return 0;
}