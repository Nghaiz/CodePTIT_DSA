#include <bits/stdc++.h>
using namespace std;

int t, n, p, s, len;
vector<int> prime;
vector<string> ans;

void sieve(){
    vector<int> p(200, 1);
    p[0] = p[1] = 0;
    for (int i = 2; i * i <= 200; i++){
        if (p[i]){
            for (int j = i * i; j <= 200; j += i) p[j] = 0;
        }
    }
    for (int i = 2; i <= 199; i++){
        if (p[i]) prime.push_back(i);
    }
}

void Try(int idx, int sum, int cnt, vector<int> &tmp){
    if (sum == s && cnt == n){
        string res = "";
        for (int x : tmp) res += to_string(x) + ' ';
        ans.push_back(res);
        return;
    }

    if (cnt + (len - idx) < n) return;

    for (int i = idx; i < len; i++){
        if (sum + prime[i] <= s){
            tmp.push_back(prime[i]);
            Try(i + 1, sum + prime[i], cnt + 1, tmp);
            tmp.pop_back();
        }
        else break;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    sieve();
    len = prime.size();

    cin >> t;
    while (t--){
        ans.clear();
        cin >> n >> p >> s;
        
        int start_idx = 0;
        while (start_idx < len && prime[start_idx] <= p) ++start_idx;

        vector<int> tmp;
        Try(start_idx, 0, 0, tmp);

        cout << ans.size() << "\n";
        for (string x : ans) cout << x << "\n";
    }
    return 0;
}