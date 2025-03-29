#include <bits/stdc++.h>
using namespace std;

int k, n;
string s;

void Try(int cnt, string& res) {
    if (s > res) res = s;
    if (cnt == k) return;
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (s[j] > s[i]) {
                swap(s[i], s[j]);
                Try(cnt + 1, res);
                swap(s[i], s[j]);
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        cin >> k >> s;
        n = s.size();

        string res = s;
        Try(0, res);
        cout << res << "\n";
    }
    return 0;
}