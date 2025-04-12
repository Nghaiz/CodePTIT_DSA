#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

ll f[100];
void init(){
    f[1] = f[2] = 1;
    for (int i = 3; i <= 100; i++){
        f[i] = f[i - 1] + f[i - 2];
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    init();
    int t;
    cin >> t;
    while (t--){
        ll n, k;
        cin >> n >> k;
        while (1){
            if (n == 1 || n == 2){
                if (n == 1) cout << "A\n";
                else cout << "B\n";
                break;
            }
            if (k > f[n - 2]){
                k -= f[n - 2];
                --n;
            }
            else n -= 2;
        }
    }
    return 0;
}