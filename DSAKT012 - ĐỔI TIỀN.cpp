#include <bits/stdc++.h>
using namespace std;

int n, s, ans = INT_MAX;

void Try(int a[], int start, int sum, int cnt){
    if (sum == s){
        ans = min(ans, cnt);
    }
    for (int i = start; i < n; i++){
        if (i > start && a[i] == a[i - 1]) continue;

        if (sum + a[i] > s || cnt >= ans) continue;

        Try(a, i + 1, sum + a[i], cnt + 1);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> s;
    int a[n];
    for (int &x : a) cin >> x;
    if (s == 0){
        cout << -1;
        return 0;
    }
    sort(a, a + n, greater<int>());

    Try(a, 0, 0, 0);
    cout << (ans == INT_MAX ? -1 : ans);
    return 0;
}