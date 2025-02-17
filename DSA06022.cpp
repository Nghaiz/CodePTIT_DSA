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
        cin >> n;
        set<int> se;
        for (int i = 0; i < n; i++){
            cin >> x;
            se.insert(x);
        }
        if (se.size() == 1) cout << "-1\n";
        else {
            set<int>::iterator it = se.begin();
            cout << *(it++) << " ";
            cout << *it << "\n";
        }
    }
    return 0;
}   