#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

char c;
int n, used[20] = {0};
string ans;

bool valid(string s){
    for (int i = 1; i < s.size() - 1; i++){
        if ((s[i] == 'A' && s[i - 1] != 'E' && s[i + 1] != 'E') || (s[i] == 'E' && s[i - 1] != 'A' && s[i + 1] != 'A')) return false;
    }
    return true;
}

void Try(int idx){
    if (idx == n){
        if (valid(ans)) cout << ans << "\n";
        return;
    }
    for (char i = 'A'; i <= c; i++){
        if (used[i - 65] == 0){
            ans.push_back(i);
            used[i - 65] = 1;
            Try(idx + 1);
            ans.pop_back();
            used[i - 65] = 0;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> c;
    n = (int)(c) - 64;
    Try(0);
    return 0;
}