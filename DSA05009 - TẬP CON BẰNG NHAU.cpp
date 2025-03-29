#include <bits/stdc++.h>
using namespace std;

int t, n, sum;

bool Try(int a[], int idx, int tong){
    if (tong == sum){
        return true;
    }
    for (int i = idx; i < n; i++){
        if (tong + a[i] <= sum){
            if (Try(a, i + 1, tong + a[i])) return true;
        }
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while (t--){
        sum = 0;

        cin >> n;
        int a[n];
        for (int &x : a) {
            cin >> x;
            sum += x;
        }

        if (sum % 2 == 0){
            sum /= 2;
            int max_val = *max_element(a, a + n);
            
            if (max_val > sum){
                cout << "NO\n";
                continue;
            }
            else cout << (Try(a, 0, 0) ? "YES\n" : "NO\n");
        }
        else cout << "NO\n";
    }
    return 0;
}