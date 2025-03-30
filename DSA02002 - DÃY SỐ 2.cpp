#include <bits/stdc++.h>
using namespace std;

void Try(int v[], int len){
    if (len == 0) return; 

    int tmp[len - 1];
    for (int i = 0; i < len - 1; i++){
        tmp[i] = v[i] + v[i + 1];
    }
    Try(tmp, len - 1);

    cout << "[" << v[0];
    for (int i = 1; i < len; i++){
        cout << " " << v[i];
    }
    cout << "] ";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n];
        for (int &x : a) cin >> x;
        Try(a, n);
        cout << "\n";
    }
    return 0;
}