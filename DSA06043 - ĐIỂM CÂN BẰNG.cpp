#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n, flag = 1;
        cin >> n;
        int a[n];
        for (int &x : a) cin >> x;

        int f[n];
        f[0] = a[0];
        for (int i = 1; i < n; i++){
            f[i] = f[i - 1] + a[i];
        }
        for (int i = 1; i < n - 1; i++){
            //phai = trai
            if (f[n - 1] - f[i] == f[i - 1]){
                cout << i + 1 << "\n";
                flag = 0;
                break;
            }
        }
        if (flag) cout << "-1\n";
    }
    return 0;
}