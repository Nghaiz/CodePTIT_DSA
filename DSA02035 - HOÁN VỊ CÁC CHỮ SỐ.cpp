#include <bits/stdc++.h>
using namespace std;

int n, k, ans = INT_MAX;
vector<string> v;

string hoanVi(string s, vector<int> perm){
    string res(k, ' ');
    for (int i = 0; i < k; i++){
        res[perm[i]] = s[i];
    }
    return res;
}

void solve(){
    vector<int> pos(k);
    for (int i = 0; i < k; i++){
        pos[i] = i;
    }
    do {
        vector<int> tmp;
        for (string s : v){
            tmp.push_back(stoi(hoanVi(s, pos)));
        }
        int min_val = *min_element(begin(tmp), end(tmp));
        int max_val = *max_element(begin(tmp), end(tmp));
        ans = min(ans, max_val - min_val);

    } while (next_permutation(begin(pos), end(pos)));
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> k;
    v.resize(n);
    for (string &x : v) cin >> x;

    solve();
    cout << ans;
    return 0;
}