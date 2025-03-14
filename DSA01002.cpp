#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int t, n, k, a[10005];
bool ok;

void init(){
    cin >> n >> k;
    ok = true;
    for (int i = 1; i <= k; i++) cin >> a[i];
}

void sinh(){
    int i = k;
    while (i >= 1 && a[i] == n - k + i) --i;

    if (i == 0) {
        for (int j = 1; j <= k; j++) cout << j << " ";
    }
    else {
        ++a[i];
        for (int j = i + 1; j <= k; j++) a[j] = a[j - 1] + 1;

        for (int j = 1; j <= k; j++) cout << a[j] << " ";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while (t--){
        init();
        sinh();
        cout << "\n";
    }
    return 0;
}