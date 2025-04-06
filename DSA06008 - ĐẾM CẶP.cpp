#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

ll demCap(vector<int> a, vector<int> b){
    sort(begin(b), end(b));

    int cnt[5] = {0};
    for (int x : b){
        if (x < 5) cnt[x]++;
    }
    ll res = 0;
    for (int x : a){
        if (x == 0) continue;

        if (x == 1){
            res += cnt[0];
            continue;
        }

        res += (b.end() - upper_bound(begin(b), end(b), x));

        if (x == 2) res -= (cnt[3] + cnt[4]);
        if (x == 3) res += cnt[2];

        res += cnt[0] + cnt[1];
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;
        cout << demCap(a, b) << "\n";
    }
    return 0;
}