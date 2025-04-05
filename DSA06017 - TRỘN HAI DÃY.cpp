#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int l, int m, int r){
    int n1 = m - l + 1, n2 = r - m;
    int x[n1], y[n2];
    for (int i = 0; i < n1; i++) x[i] = a[l + i];
    for (int i = 0; i < n2; i++) y[i] = a[m + 1 + i];
    
    int i = 0, j = 0, idx = l;
    while (i < n1 && j < n2){
        if (x[i] <= y[j]) a[idx++] = x[i++];
        else a[idx++] = y[j++];
    }
    while (i < n1) a[idx++] = x[i++];
    while (j < n2) a[idx++] = y[j++];
}

void mergeSort(int a[], int l, int r){
    if (l < r){
        int m = l + (r - l) / 2;
        mergeSort(a, l, m);
        mergeSort(a, m + 1, r);
        merge(a, l, m, r);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n, m;
        cin >> n >> m;
        int a[n + m];
        for (int i = 0; i < n + m; i++) cin >> a[i];
        mergeSort(a, 0, n + m - 1);
        for (int x : a) cout << x << " ";
        cout << "\n";
    }
    return 0;
}