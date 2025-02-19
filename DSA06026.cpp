#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int cnt = 1;

void bubbleSort(int a[], int n){
    for (int i = 0; i < n - 1; i++){
        bool check = true;
        for (int j = 0; j < n - i - 1; j++){
            if (a[j] > a[j + 1]){
                swap(a[j], a[j + 1]);
                check = false;
            }
        }
        if (check) break;

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
    bubbleSort(a, n);
    return 0;
}