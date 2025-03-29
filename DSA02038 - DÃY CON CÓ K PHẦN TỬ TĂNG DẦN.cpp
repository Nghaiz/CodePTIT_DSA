#include <bits/stdc++.h>
using namespace std;

int t, n, k;

void Try(int a[], int idx, vector<int> &tmp){
    if (tmp.size() == k){
        for (int x : tmp) cout << x << " ";
        cout << "\n";
        return;
    }
    for (int i = idx; i < n; i++){
        tmp.push_back(a[i]);
        Try(a, i + 1, tmp);
        tmp.pop_back();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while (t--){
        cin >> n >> k;
        int a[n];
        for (int &x : a) cin >> x;
        sort(a, a + n);

        vector<int> tmp;
        Try(a, 0, tmp);
    }
    return 0;
}