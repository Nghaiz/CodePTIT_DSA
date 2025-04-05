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
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int &x : a) cin >> x;

        cout << (binary_search(a, a + n, x) ? 1 : -1) << "\n";
    }
    return 0;
}