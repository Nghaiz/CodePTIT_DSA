#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int n;
string s;
bool ok = true;

void sinh(){
    int i = s.size() - 1;
    while (i >= 0 && s[i] == '8'){
        s[i] = '6';
        --i;
    }
    if (i < 0) ok = false;
    else s[i] = '8';
}

bool check(){
    if (s[0] == '6' || s[n - 1] == '8') return false;
    if (s.find("88") != string::npos) return false;
    if (s.find("6666") != string::npos) return false;

    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    s = string(n, '6');
    while (ok){
        if (check()) cout << s << "\n";
        sinh();
    }
    return 0;
}