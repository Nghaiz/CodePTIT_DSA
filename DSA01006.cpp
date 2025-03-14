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

        vector<string> v;
        do {
            string s;
            for (int x : a) s += to_string(x);
            v.push_back(s);
        } while (next_permutation(a, a + n));

        for (int i = v.size() - 1; i >= 0; i--) cout << v[i] << " ";
        cout << "\n";
    }
    return 0;
}