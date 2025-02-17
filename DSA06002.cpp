#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int n, x;

bool cmp (int a, int b){
    return abs(x - a) < abs(x - b);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        stable_sort(a, a + n, cmp);
        for (int num : a) cout << num << " ";
        cout << "\n";
    }
    return 0;
}