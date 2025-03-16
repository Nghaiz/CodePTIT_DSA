#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int t, n, k, a[20], b[20], cnt;
bool ok;

void init(){
    cin >> n >> k;
    for (int i = 1; i <= k; i++) {
        cin >> b[i];
        a[i] = i;
    }
    ok = true;
}

void sinh(){
    int i = k;
    while (i >= 1 && a[i] == n - k + i) --i;

    if (i == 0) ok = false;
    else {
        ++a[i];
        for (int j = i + 1; j <= k; j++) a[j] = a[j - 1] + 1;
    }
}

bool check(){
    for (int i = 1; i <= k; i++){
        if (a[i] != b[i]) return false;           
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while (t--){
        init();
        cnt = 1;
        while (ok){
            if (check()) {
                cout << cnt << "\n";
                break;
            }
            ++cnt;
            sinh();
        }
    }
    return 0;
}