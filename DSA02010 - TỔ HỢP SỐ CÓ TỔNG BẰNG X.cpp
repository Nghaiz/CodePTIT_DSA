#include <bits/stdc++.h>
using namespace std;

int t, n, x, flag;

void Try(int a[], vector<int>& ans, int sum, int pos) {
    if (sum == x) {
        flag = 0;
        
        int len = ans.size();
        cout << "[";
        for (int j = 0; j < len; j++) {
            cout << ans[j];
            if (j != len - 1) cout << " ";
        } 
        cout << "]";
        return;
    }
    
    for (int i = pos; i < n; i++) {
        if (sum + a[i] <= x) {
            ans.push_back(a[i]);
            Try(a, ans, sum + a[i], i);
            ans.pop_back();
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while (t--) {
        cin >> n >> x;
        int a[n];
        for (int &d : a) cin >> d;
        
        flag = 1;
        vector<int> ans;
        Try(a, ans, 0, 0);
        
        if (flag) cout << -1;
        cout << "\n";
    }
    return 0;
}