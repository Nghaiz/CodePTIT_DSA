#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int t, n;
int cnt[100005] = {0};

bool cmp(int a, int b){
    if (cnt[a] != cnt[b]){
        return cnt[a] > cnt[b];
    }
    return a < b;
}

void solve(){
    memset(cnt, 0, sizeof(cnt));
    cin >> n;
    int a[n];
    for (int &x : a) {
        cin >> x;
        cnt[x]++;
    }
    sort(a, a + n, cmp);
    for (int x : a) cout << x << " ";
    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}