#include <bits/stdc++.h>
using namespace std;

bool valid(string s) {
    if (s.size() < 2) return false;
    stack<char> st;
    for (char c : s) {
        if (c == '(') st.push(c);
        else if (c == ')') {
            if (st.empty()) return false;
            st.pop();
        }
    }
    return st.empty();
}

void solve(string s) {
    queue<string> q;
    unordered_set<string> visited;
    vector<string> res;
    bool found = false;
    
    q.push(s);
    visited.insert(s);
    
    while (!q.empty() && !found) {
        int levelSize = q.size();
        
        for (int i = 0; i < levelSize; i++) {
            string curr = q.front();
            q.pop();
            
            if (valid(curr)) {
                res.push_back(curr);
                found = true;
            }
            
            if (found) continue;
            
            for (int j = 0; j < curr.size(); j++) {
                if (curr[j] != '(' && curr[j] != ')') continue;
                
                string newExpr = curr.substr(0, j) + curr.substr(j + 1);
                
                if (visited.find(newExpr) == visited.end()) {
                    visited.insert(newExpr);
                    q.push(newExpr);
                }
            }
        }
    }
    if (res.empty()) cout << "-1" << "\n";
    else {
        set<string> se(res.begin(), res.end());
        
        bool tmp = true;
        for (string x : se) {
            if (!tmp) cout << " ";
            cout << x;
            tmp = false;
        }
        cout << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        solve(s);
    }
    return 0;
}