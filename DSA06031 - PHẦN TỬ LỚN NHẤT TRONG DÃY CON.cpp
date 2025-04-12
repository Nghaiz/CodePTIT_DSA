#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int &x : a) cin >> x;
        
        int max_val = *max_element(a, a + k);
        cout << max_val;

        for (int i = 1; i <= n - k; i++){
            if (a[i - 1] == max_val){
                max_val = *max_element(a + i, a + i + k);
            }
            else if (a[i + k - 1] > max_val){
                max_val = a[i + k - 1];
            }
            cout << " " << max_val;
        }
        cout << "\n";
    }
    return 0;
}