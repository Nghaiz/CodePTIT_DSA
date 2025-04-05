#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, x;
    cin >> n;
    vector<int> a, b;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (i & 1) b.push_back(x);
        else a.push_back(x);
    }
    sort(begin(a), end(a));
    sort(rbegin(b), rend(b));

    for (int i = 0; i < b.size(); i++){
        cout << a[i] << " " << b[i] << " ";
    }
    if (n & 1) cout << a.back();
    return 0;
}