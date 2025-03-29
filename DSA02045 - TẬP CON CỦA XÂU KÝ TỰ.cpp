#include <bits/stdc++.h>
using namespace std;

int t, n;
string s;

void Try(int idx, string ans){
    for (int i = idx; i < n; i++){
        ans += s[i];
        cout << ans << " ";
        Try(i + 1, ans);
        ans.pop_back();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while (t--){
        cin >> n >> s;
        sort(begin(s), end(s)); 
        Try(0, "");
        cout << "\n";
    }
    return 0;
}