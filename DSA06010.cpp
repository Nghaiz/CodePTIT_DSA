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
        set<char> se;
        string s;
        for (int i = 0; i < n; i++){
            cin >> s;
            for (char x : s) se.insert(x);
        }
        for (char x : se) cout << x << " ";
        cout << "\n";
    }
    return 0;
}