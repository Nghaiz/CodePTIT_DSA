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
        for (int i = 0; i < n; i++) a[i] = i + 1;
        do {
            for (int x : a) cout << x;
            cout << " ";
        } while (next_permutation(a, a + n));

        cout << "\n";
    }
    return 0;
}