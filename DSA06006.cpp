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
        int n, x;
        cin >> n;
        int cnt[3] = {0};
        for (int i = 0; i < n; i++) {
            cin >> x;
            cnt[x]++;
        }
        for (int i = 0; i <= 2; i++){
            for (int j = 0; j < cnt[i]; j++){
                cout << i << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}