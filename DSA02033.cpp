#include <bits/stdc++.h>
using namespace std;

int t, n, a[20], used[20];

void Try(int i){
    if (i == n){
        for (int k = 0; k < n; k++) cout << a[k];
        cout << "\n";
        return;
    }
    for (int j = 1; j <= n; j++){
        if (used[j] == 0){
            if (i == 0 || abs(j - a[i - 1]) != 1){
                a[i] = j;
                used[j] = 1;

                Try(i + 1);
                used[j] = 0;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while (t--){
        cin >> n;
        if (n <= 3) continue;
        Try(0);
    }
    return 0;
}