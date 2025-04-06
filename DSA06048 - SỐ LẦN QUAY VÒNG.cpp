#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        long long a[n];
        for (long long &x : a) cin >> x;

        int idx = 0;
        for (int i = 1; i < n; i++){
            if (a[i] < a[idx]) {
                idx = i;
                break;
            }
        }
        cout << idx << "\n";
    }
    return 0;
}