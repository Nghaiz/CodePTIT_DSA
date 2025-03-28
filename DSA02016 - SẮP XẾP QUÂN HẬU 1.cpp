#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int t, n, cnt, cot[15], xuoi[25], nguoc[25];

void Try(int i){
    for (int j = 1; j <= n; j++){
        if (cot[j] == 0 && xuoi[i - j + n] == 0 && nguoc[i + j - 1] == 0){
            cot[j] = xuoi[i - j + n] = nguoc[i + j - 1] = 1;

            if (i == n) ++cnt;
            else Try(i + 1);

            cot[j] = xuoi[i - j + n] = nguoc[i + j - 1] = 0;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while (t--){
        cnt = 0;
        cin >> n;
        Try(1);
        cout << cnt << "\n";
    }
    return 0;
}