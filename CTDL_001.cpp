#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int n, m, a[10];
bool ok = true;

void sinh(){
    int i = m;
    while (i >= 1 && a[i] == 1){
        a[i] = 0;
        --i;
    }
    if (i == 0) ok = false;
    else a[i] = 1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    m = n / 2;
    if (n & 1){
        while (ok){
            for (int mid = 0; mid <= 1; mid++){
                for (int i = 1; i <= m; i++) cout << a[i] << " ";
                cout << mid << " ";
                for (int i = m; i >= 1; i--) cout << a[i] << " ";
                cout << "\n";
            }   
            sinh();
        }
    }
    else {
        while (ok){
            for (int i = 1; i <= m; i++) cout << a[i] << " ";
            for (int i = m; i >= 1; i--) cout << a[i] << " ";
            cout << "\n";

            sinh();
        }
    }
    return 0;
}