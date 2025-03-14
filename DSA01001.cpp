#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int t;
string s;

void sinh(){
    int i = s.size() - 1;
    while (i >= 0 && s[i] == '1'){
        s[i] = '0';
        --i;
    }
    if (i < 0) cout << string(s.size(), '0') << "\n";
    else {
        s[i] = '1';
        cout << s << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while (t--){
        cin >> s;
        sinh();
    }
    return 0;
}