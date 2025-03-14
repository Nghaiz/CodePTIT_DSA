#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int t, n, k, a[20];
bool ok;

void init(){
    ok = true;
    cin >> n >> k;
}

void sinh(){
    int i = n;
    while (i >= 1 && a[i] == 1){
        a[i] = 0;
        --i;
    }
    if (i == 0) ok = false;
    else a[i] = 1;
}

bool check(){
    return count(a + 1, a + n + 1, 1) == k;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while (t--){
        init();
        while (ok){
            if (check()) {
                for (int i = 1; i <= n; i++) cout << a[i];
                cout << "\n";
            }
            sinh();
        }
    }
    return 0;
}