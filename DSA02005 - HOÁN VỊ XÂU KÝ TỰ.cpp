#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int t, len, used[26] = {0};
string s;

void Try(int idx, string ans){
    if (idx == len){
        cout << ans << " ";
        return;
    }
    for (int i = 0; i < len; i++){
        if (used[s[i] - 'A'] == 0){
            used[s[i] - 'A'] = 1;
            Try(idx + 1, ans + s[i]);
            used[s[i] - 'A'] = 0;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while (t--){
        cin >> s;
        len = s.size();
        sort(begin(s), end(s));
        Try(0, "");
        cout << "\n";
    }
    return 0;
}