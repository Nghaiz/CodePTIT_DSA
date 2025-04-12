#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

vector<int> p(1e6 + 1, 1);
void sieve(){
    p[0] = p[1] = 1;
    for (int i = 2; i <= 1e3; i++){
        if (p[i]){
            for (int j = i * i; j <= 1e6; j += i) p[j] = 0;
        }
    }
}

void solve(int n){
    for (int i = 2; i <= n / 2; i++){
        if (p[i] && p[n - i]) {
            cout << i << " " << n - i << "\n";
            return;
        }
    }
    cout << "-1\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    sieve();
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}