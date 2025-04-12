#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

bool check(string s){
    if (s.size() != 1) return false;
    if (s != "+" && s != "-" && s != "*" && s != "/") return false;
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        string s, w;
        ll tmp, n;
        cin >> n;
        cin.ignore();

        getline(cin, s);
        stringstream ss(s);
        stack<ll> st;
        while (ss >> w){
            if (!check(w)) st.push(stoll(w));
            else {
                ll b = st.top(); st.pop();
                ll a = st.top(); st.pop();

                if (w == "+") tmp = a + b;
                else if (w == "-") tmp = a - b;
                else if (w == "*") tmp = a * b;
                else tmp = a / b;

                st.push(tmp);
            }
        }
        cout << st.top() << "\n";
    }
    return 0;
}