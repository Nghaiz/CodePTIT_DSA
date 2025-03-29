#include <bits/stdc++.h>
using namespace std;

int t, n;
vector<int> p(1500, 1);
set<vector<int>> ans;

void sieve(){
    p[0] = p[1] = 0;
    for (int i = 2; i * i <= 1500; i++){
        if (p[i]){
            for (int j = i * i; j <= 1500; j += i) p[j] = 0;
        }
    }
}

void Try(int a[], int idx, int sum, vector<int> &tmp){
    for (int i = idx; i < n; i++){
        tmp.push_back(a[i]);
        sum += a[i];

        if (p[sum]){
            vector<int> v(tmp.rbegin(), tmp.rend());
            ans.insert(v);
        }

        Try(a, i + 1, sum, tmp);
        sum -= a[i];
        tmp.pop_back();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    sieve();
    cin >> t;
    while (t--){
        ans.clear();

        cin >> n;
        int a[n];
        for (int &x : a) cin >> x;
        sort(a, a + n);

        vector<int> tmp;
        Try(a, 0, 0, tmp);

        for (vector<int> v : ans){
            for (int x : v) cout << x << " ";
            cout << "\n";
        }
    }
    return 0;
}