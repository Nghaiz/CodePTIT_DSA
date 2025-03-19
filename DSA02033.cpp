#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int t, n, a[20], used[20];

void in(){
    for (int i = 1; i <= n; i++) cout << a[i];
    cout << "\n";
}

bool check(){
    for (int i = 2; i <= n; i++){
        if (abs(a[i] - a[i - 1]) == 1) return false;
    }
    return true;
}

void Try(int i){
    for (int j = 1; j <= n; j++){
        if (used[j] == 0){
            a[i] = j;
            used[j] = 1;

            if (i == n){
                if (check()) in();
            }
            else Try(i + 1);

            used[j] = 0;
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
        Try(1);
    }
    return 0;
}