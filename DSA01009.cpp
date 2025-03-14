#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int n, k;
char a[105];
bool ok = true;
vector<string> v;

void sinh(){
    int i = n;
    while (i >= 1 && a[i] == 'B'){
        a[i] = 'A';
        --i;
    }
    if (i == 0) ok = false;
    else a[i] = 'B';
}

bool check(){
    int len = 0, total = 0;
    for (int i = 1; i <= n; i++){
        if (a[i] == 'A'){
            ++len;
            if (len >= k) ++total;
        }
        else len = 0;
    }
    return total == 1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> k;
    for (int i = 1; i <= n; i++) a[i] = 'A';
    
    while (ok){
        if (check()){
            string s;
            for (int i = 1; i <= n; i++) s += a[i];
            v.push_back(s);
        }
        sinh();
    }
    cout << v.size() << "\n";
    for (string x : v) cout << x << "\n";
    return 0;
}