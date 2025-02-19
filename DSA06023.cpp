#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int cnt = 1;

void sapxep(int a[], int n){
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (a[i] > a[j]) swap(a[i], a[j]);
        }

        cout << "Buoc " << cnt++ << ": ";
        for (int k = 0; k < n; k++){
            cout << a[k] << " ";
        }
        cout << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    sapxep(a, n);
    return 0;
}