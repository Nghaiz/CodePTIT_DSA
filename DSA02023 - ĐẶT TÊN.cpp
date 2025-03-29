#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int n, k;
string s;
vector<string> v, tmp;

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

void Try(int idx, int len){
    if (len == k){
        for (string x : tmp) cout << x << " ";
        cout << "\n";
        return;
    }
    for (int i = idx; i < n; i++){
        tmp.push_back(v[i]);
        Try(i + 1, len + 1);
        tmp.pop_back();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    init();
    Try(0, 0);
    return 0;
}