#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n, cnt = 0;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b + n);

        //Duyet mang b
        for (int i = 0; i < n - 1; i++){
            if (a[i] != b[i]){
                //Duyet mang a
                for (int j = i + 1; j < n; j++){
                    if (a[j] == b[i]){
                        ++cnt;
                        swap(a[j], a[i]);
                        break;
                    }
                }
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}