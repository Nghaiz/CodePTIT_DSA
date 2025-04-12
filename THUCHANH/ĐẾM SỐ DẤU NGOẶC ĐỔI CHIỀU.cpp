#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

void solve(string s){
    stack<char> st;
    int open = 0, close = 0;
    for (char x : s){
        if (x == '('){
            ++open;
            st.push(x);
        }
        else {
            if (!st.empty() && st.top() == '(') {
                --open;
                st.pop();
            }
            else {
                ++close;
                st.push(x);
            }
        }
    }
    int ans = open / 2 + close / 2;
    ans += open % 2 + close % 2;
    cout << ans << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        solve(s);
    }
    return 0;
}