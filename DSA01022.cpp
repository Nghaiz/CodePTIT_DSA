#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int t, n, cnt, a[15], b[15];

bool check(){
    for (int i = 0; i < n; i++){
        if (b[i] != a[i]) return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while (t--){
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            a[i] = i + 1;
        }
        
        cnt = 1;
        do {
            if (check()) break;
            ++cnt;
        } while (next_permutation(a, a + n));

        cout << cnt << "\n";
    }
    return 0;
}