#include <bits/stdc++.h>
using namespace std;

int t, n, k, flag;

void Try(int a[], int pos, int sum, vector<int>& ans){
    if (sum == k){
        flag = 0;
        int len = ans.size();
        
        cout << "[";
        for (int i = 0; i < len; i++){
            cout << ans[i];
            if (i != len - 1) cout << " ";
        }
        cout << "] ";
    }
    for (int i = pos; i < n; i++){
        if (sum + a[i] <= k){
            ans.push_back(a[i]);
            Try(a, i + 1, sum + a[i], ans);
            ans.pop_back();
        }
        else break;
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

        flag = 1;
        vector<int> ans;
        Try(a, 0, 0, ans);
        
        if (flag) cout << -1;
        cout << "\n";
    }
    return 0;
}