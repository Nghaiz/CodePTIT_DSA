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
        int n, k, idx = 0;
        cin >> n >> k;
        int a[n];
        for (int &x : a) cin >> x;
        sort(a, a + n, greater<int>());
        while (k--){
            cout << a[idx++] << " ";
        }
        cout << "\n";
    }
    return 0;
}