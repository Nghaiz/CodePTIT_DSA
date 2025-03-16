#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t, n;
    cin >> t;
    while (t--){
        string s;
        cin >> n >> s;
        int flag = next_permutation(begin(s), end(s));
        if (flag) cout << n << " " << s << "\n";
        else cout << n << " BIGGEST\n";
    }
    return 0;
}