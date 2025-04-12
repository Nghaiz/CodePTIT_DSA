#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

void solve(string s){
    stack<string> st;

    for (char x : s){
        if (isalpha(x)) st.push(string(1, x));
        else {
            string o1 = st.top(); st.pop();
            string o2 = st.top(); st.pop();

            string ope = x + o2 + o1;
            st.push(ope);
        }
    }
    cout << st.top() << "\n";
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