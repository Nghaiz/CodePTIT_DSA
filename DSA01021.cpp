#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int t, n, k, a[1005], b[1005];

void init(){
    cin >> n >> k;
    for (int i = 1; i <= k; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
}

void sinh(){
    int i = k;
    while (i >= 1 && a[i] == n - k + i) --i;

    if (i == 0) cout << k << "\n";
    else {
        ++a[i];
        for (int j = i + 1; j <= k; j++) a[j] = a[j - 1] + 1;

        int cnt = 0;
        for (int j = 1; j <= k; j++){
            bool flag = true;
            for (int l = 1; l <= k; l++){
                if (a[j] == b[l]){
                    flag = false;
                    break;
                }
            }
            if (flag) ++cnt;
        }

        cout << cnt << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while (t--){
        init();
        sinh();
    }
    return 0;
}