#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int n, k, cnt = 0, a[105], idx[105];
bool ok = true;

void sinh(){
    int i = k - 1;
    while (i >= 0 && idx[i] == n - k + i) --i;

    if (i < 0) ok = false;
    else {
        ++idx[i];
        for (int j = i + 1; j < k; j++) idx[j] = idx[j - 1] + 1;
    }
}

bool check(){
    for (int i = 0; i < k; i++){
        if (a[idx[i]] < a[idx[i - 1]]) return false;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];   //gia tri
    for (int i = 0; i < k; i++) idx[i] = i;    //chi so
    while (ok){
        if (check()) ++cnt;
        sinh();
    }
    cout << cnt;
    return 0;
}