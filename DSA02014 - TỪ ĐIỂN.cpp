#include <bits/stdc++.h>
using namespace std;

int t, k, n, m;
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
set<string> se;
vector<vector<char>> a;
vector<vector<bool>> visited;
vector<string> ans;

void Try(int i, int j, string s) {
    s += a[i][j];
    visited[i][j] = true;
    
    if (se.find(s) != se.end()) {
        ans.push_back(s);
    }
    
    bool isPrefix = false;
    for (string word : se) {
        if (word.size() >= s.size() && word.substr(0, s.size()) == s) {
            isPrefix = true;
            break;
        }
    }
    
    if (isPrefix) {
        for (int p = 0; p < 8; p++) {
            int i1 = i + dx[p];
            int j1 = j + dy[p];
            if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && !visited[i1][j1]){
                Try(i1, j1, s);
            }
        }
    }
    
    visited[i][j] = false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while (t--) {
        se.clear();
        a.clear();
        ans.clear();
        
        cin >> k >> n >> m;
        string x;
        for (int i = 0; i < k; i++) {
            cin >> x;
            se.insert(x);
        }
        a.resize(n, vector<char>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++){
                visited.assign(n, vector<bool>(m, false));
                Try(i, j, "");
            }
        }
        
        if (ans.empty()) cout << "-1\n";
        else {
            for (string x : ans) cout << x << " ";
            cout << "\n";
        }
    }
    return 0;
}