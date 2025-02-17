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
        int a[n];
        for (int &x : a) cin >> x;
        sort(a, a + n);

        int l = 0, r = n - 1;
        while (l < r){
            cout << a[r] << " " << a[l] << " ";
            ++l;
            --r;
        }
        if (l == r) cout << a[l];
        cout << "\n";
    }
    return 0;
}