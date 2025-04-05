#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n, x, tmp, ans;
        cin >> n >> x;
        for (int i = 1; i <= n; i++){
            cin >> tmp;
            if (tmp == x) ans = i;
        }
        cout << ans << "\n";
    }
    return 0;
}