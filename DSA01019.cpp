#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int t, n;
string s;
bool ok;

void init(){
    cin >> n;
    ok = true;
    s = string(n, 'A');
    s[0] = 'H';
    s[n - 1] = 'A';
}

void sinh(){
    int i = s.size() - 2;
    while (i >= 0 && s[i] == 'H'){
        s[i] = 'A';
        --i;
    }
    if (i < 0) ok = false;
    else s[i] = 'H';
}

bool check(){
    if (s.find("HH") != string::npos) return false;
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while (t--){
        init();
        while (ok){
            if (check()) cout << s << "\n";
            sinh();
        }
    }
    return 0;
}