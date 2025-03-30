#include <bits/stdc++.h>
using namespace std;

int t, found, a[5];

void Try(int idx, int ans){
    if (idx == 5) {
        if (ans == 23){
            found = 1;  
        }
        return;
    }
    Try(idx + 1, ans + a[idx]);
    Try(idx + 1, ans - a[idx]);
    Try(idx + 1, ans * a[idx]);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while (t--){
        for (int &x : a) cin >> x;
        sort(a, a + 5);
        found = 0;

        do{
            Try(1, a[0]);
            if (found) break;
        } while (next_permutation(a, a + 5));

        cout << (found ? "YES" : "NO") << "\n";
    }
    return 0;
}