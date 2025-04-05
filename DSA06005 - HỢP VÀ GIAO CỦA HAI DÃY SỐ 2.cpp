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
        int n, m, x;
        cin >> n >> m;
        set<int> hop, giao;

        for (int i = 0; i < n; i++){
            cin >> x;
            hop.insert(x);
        }
        for (int i = 0; i < m; i++){
            cin >> x;
            if (hop.count(x)) giao.insert(x);

            hop.insert(x);
        }
        for (int x : hop) cout << x << " ";
        cout << "\n";
        for (int x : giao) cout << x << " ";
        cout << "\n";
    }
    return 0;
}