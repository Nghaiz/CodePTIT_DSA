#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<vector<int>> v;
vector<vector<int>> ans;

void Try(int idx, int sum, vector<bool> &cot, vector<int> &tmp){
    if (idx == n && sum == k){
        ans.push_back(tmp);
        return;
    }
    for (int j = 0; j < n; j++){
        if (!cot[j]){
            if (sum + v[idx][j] <= k){
                cot[j] = true;
                tmp.push_back(j + 1);
                Try(idx + 1, sum + v[idx][j], cot, tmp);
                cot[j] = false;
                tmp.pop_back();
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> k;
    v.resize(n, vector<int>(n));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> v[i][j];
        }
    }
    vector<int> tmp;
    vector<bool> cot(n, false);
    Try(0, 0, cot, tmp);

    cout << ans.size() << "\n";
    for (vector<int> x : ans){
        for (int d : x) cout << d << " ";
        cout << "\n";
    }
    return 0;
}