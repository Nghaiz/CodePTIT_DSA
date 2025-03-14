#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int t, n;
vector<char> v;
bool ok;

void init(){
    ok = true;
    cin >> n;
    v.assign(n, 'A');
}

void sinh(){
    int i = n - 1;
    while (i >= 0 && v[i] == 'B'){
        v[i] = 'A';
        --i;
    }
    if (i < 0) ok = false;
    else v[i] = 'B';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while (t--){
        init();
        while (ok){
            for (char x : v) cout << x;
            cout << " ";

            sinh();
        }
        cout << "\n";
    }
    return 0;
}