#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n, m, x, min_val = INT_MAX, max_val = INT_MIN;
        cin >> n >> m;
        for (int i = 0; i < n; i++){
            cin >> x;
            max_val = max(max_val, x);
        }
        for (int i = 0; i < m; i++){
            cin >> x;
            min_val = min(min_val, x);
        }
        cout << 1ll * min_val * max_val << "\n";
    }
    return 0;
}