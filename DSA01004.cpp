#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int t, n, k, a[1005];
bool ok;

void init(){
    cin >> n >> k;
    ok = true;
    for (int i = 1; i <= k; i++) a[i] = i;
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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while (t--){
        init();
        while (ok){
            for (int i = 1; i <= k; i++) cout << a[i];
            cout << " ";

            sinh();
        }
        cout << "\n";
    }
    return 0;
}