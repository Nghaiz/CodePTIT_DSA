#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int t, n, x, flag;
vector<string> ans;

void Try(int a[], int idx, int sum, vector<int> &tmp){
    if (sum == x){
        flag = 0;
        string s = "{";
        for (int d : tmp) s += to_string(d) + " ";
        s.pop_back();
        s.push_back('}');
        ans.push_back(s);

        return;
    }
    for (int i = idx; i < n; i++){
        if (sum + a[i] <= x){
            tmp.push_back(a[i]);
            Try(a, i, sum + a[i], tmp);
            tmp.pop_back();
        }
        else break;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while (t--){
        ans.clear();
        flag = 1;

        cin >> n >> x;
        int a[n];
        for (int &x : a) cin >> x;
        sort(a, a + n);

        vector<int> tmp;
        Try(a, 0, 0, tmp);

        if (flag) cout << -1;
        else {
            cout << ans.size() << " ";
            for (string res : ans) cout << res << " ";
        }
        cout << "\n";
    }
    return 0;
}