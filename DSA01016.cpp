#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int t, n, a[100], cnt;
bool ok;

void init(){
    cin >> n;
    cnt = 1;
    a[cnt] = n;
    ok = true;
}

void sinh(){
    int i = cnt;
    while (i >= 1 && a[i] == 1) --i;

    if (i == 0) ok = false;
    else {
        --a[i];
        int d = cnt - i + 1;
        cnt = i;

        int q = d / a[i];
        int r = d % a[i];

        if (q){
            for (int j = 1; j <= q; j++){
                ++cnt;
                a[cnt] = a[i];
            }
        }
        if (r){
            ++cnt;
            a[cnt] = r;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while (t--){
        init();
        while (ok){
            cout << "(";
            for (int i = 1; i <= cnt; i++){
                cout << a[i];
                if (i != cnt) cout << " ";
            }
            cout << ") ";
            
            sinh();
        }
        cout << "\n";
    }
    return 0;
}