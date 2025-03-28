#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int n, k;
string s;
vector<string> v, ans;

void init(){
    cin >> n >> k;
    set<string> se;
    for (int i = 0; i < n; i++){
        cin >> s;
        se.insert(s);
    }
    v.assign(se.begin(), se.end());
    n = v.size();
}

void Try(int idx, int cnt){
    if (cnt == k){
        for (string x : ans) cout << x << " ";
        cout << "\n";
        return;
    }
    for (int i = idx; i < n; i++){
        ans.push_back(v[i]);
        Try(i + 1, cnt + 1);
        ans.pop_back();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    init();
    Try(0, 0);
    return 0;
}