#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n, sum, ans = INT_MAX;
        cin >> n;
        int a[n];
        for (int &x : a) cin >> x;
        
        for (int i = 0; i < n - 1; i++){
            for (int j = i + 1; j < n; j++){
                sum = a[i] + a[j];
                if (abs(sum) < abs(ans)) ans = sum;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}