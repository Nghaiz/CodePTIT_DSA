#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    vector<int> usntNhoNhat(100005);
    for (int i = 0; i < 100005; i++) {
        usntNhoNhat[i] = i;
    }
    for (int p = 2; p * p < 100005; p++) {
        if (usntNhoNhat[p] == p) {
            for (int i = p * p; i < 100005; i += p) {
                if (usntNhoNhat[i] == i) {
                    usntNhoNhat[i] = p;
                }
            }
        }
    }
    
    vector<int> usntLonNhat(100005);
    for (int i = 2; i < 100005; i++) {
        int num = i, max_val = 0;
        
        while (num > 1){
            int tmp = usntNhoNhat[num];
            max_val = max(max_val, tmp);
            
            while (num % tmp == 0) num /= tmp;
        }
        usntLonNhat[i] = max_val;
    }
    
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        long long sum = 0;
        for (int i = l; i <= r; i++) sum += usntLonNhat[i];
        cout << sum << "\n";
    }
    return 0;
}