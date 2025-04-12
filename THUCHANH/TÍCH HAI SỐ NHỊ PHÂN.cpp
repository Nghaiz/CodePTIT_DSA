#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        string a, b;
        cin >> a >> b;
        ll x = 0, y = 0;
        for (int i = 0; i < a.size(); i++){
            x = x * 2 + (a[i] - '0');
        }
        for (int i = 0; i < b.size(); i++){
            y = y * 2 + (b[i] - '0');
        }
        cout << x * y << "\n";
    }
    return 0;
}