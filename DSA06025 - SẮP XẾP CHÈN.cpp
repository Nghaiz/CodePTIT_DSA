#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

void insertionSort(int a[], int n){
    cout << "Buoc 0: " << a[0] << "\n";

    for (int i = 1; i < n; i++){
        int pos = i - 1, val = a[i];
        while (pos >= 0 && a[pos] > val){
            a[pos + 1] = a[pos];
            --pos;
        }
        a[pos + 1] = val;

        cout << "Buoc " << i << ": ";
        for (int k = 0; k <= i; k++){
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
    insertionSort(a, n);
    return 0;
}