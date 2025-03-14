#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int n, k, a[10005], b[10005], sum;
bool ok = true;
vector<vector<int>> ans;

void sinh(){
    int i = n;
    while (i >= 1 && a[i] == 1){
        a[i] = 0;
        --i;
    }
    if (i == 0) ok = false;
    else a[i] = 1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> k;
    for (int i = 1; i <= n; i++) cin >> b[i];
    while (ok){
        vector<int> tmp;
        sum = 0;

        for (int i = 1; i <= n; i++){
            if (a[i]) {
                tmp.push_back(b[i]);
                sum += b[i];
            }
        }
        if (sum == k) ans.push_back(tmp);
        sinh();
    }
    for (vector<int> v : ans){
        for (int x : v) cout << x << " ";
        cout << "\n";
    }
    cout << ans.size();
    return 0;
}