#include <bits/stdc++.h>
using namespace std;

int t, n;
set<vector<int>> ans;

void Try(int a[], int idx, int sum, vector<int> &tmp){
    for (int i = idx; i < n; i++){
        tmp.push_back(a[i]);
        sum += a[i];

        if (sum & 1){
            vector<int> rev(tmp.rbegin(), tmp.rend());
            ans.insert(rev);
        }

        Try(a, i + 1, sum, tmp);

        tmp.pop_back();
        sum -= a[i];
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while (t--){
        ans.clear();

        cin >> n;
        int a[n];
        for (int &x : a) cin >> x;
        sort(a, a + n);

        vector<int> tmp;
        Try(a, 0, 0, tmp);

        for (vector<int> v : ans) {
            for (int x : v) cout << x << " ";
            cout << "\n";
        }
    }
    return 0;
}