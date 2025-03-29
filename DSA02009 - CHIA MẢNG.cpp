#include <bits/stdc++.h>
using namespace std;

int t, n, k, sum, target, flag;

bool Try(int a[], int idx, vector<int> &v){
    if (idx == n){
        for (int x : v){
            if (x != target) return false;
        }
        return true;
    }
    for (int i = 0; i < k; i++){
        if (v[i] + a[idx] <= target){
            v[i] += a[idx];

            if (Try(a, idx + 1, v)) return true;

            v[i] -= a[idx];
        }
        if (v[i] == 0) break;
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while (t--){
        sum = 0, flag = 1;

        cin >> n >> k;
        int a[n];
        for (int &x : a){
            cin >> x;
            sum += x;
        }
        if (sum % k == 0){
            target = sum / k;
            sort(a, a + n, greater<int>());
            
            if (a[0] > target){
                cout << "0\n";
                continue;
            }
            else {
                vector<int> v(k, 0);
                if (Try(a, 0, v)) cout << "1\n";
                else cout << "0\n";
            }
        }
        else cout << "0\n";
    }
    return 0;
}