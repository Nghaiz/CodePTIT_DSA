#include <bits/stdc++.h>
using namespace std;

int k;
char c;
string ans;

void Try(char idx){
    if (ans.size() == k){
        cout << ans << "\n";
        return;
    }
    for (char i = idx; i <= c; i++){
        ans.push_back(i);
        Try(i);
        ans.pop_back();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> c >> k;
    Try('A');
    return 0;
}