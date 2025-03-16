#include <bits/stdc++.h>
using namespace std;

int n, k, x;
bool ok = true;
vector<int> v, idx;
set<int> se;

void init(){
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> x;
        se.insert(x);
    }
    v.assign(se.begin(), se.end());
    n = se.size();

    idx.resize(k);
    for (int i = 0; i < k; i++) idx[i] = i;
}

void sinh(){
    int i = k - 1;
    //! n - k + i: Giá trị max của mảng chỉ số idx đạt được ở vị trí i
    while (i >= 0 && idx[i] == n - k + i) --i;

    if (i < 0) ok = false;
    else {
        ++idx[i];
        for (int j = i + 1; j < k; j++) idx[j] = idx[j - 1] + 1;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    init();
    while (ok){
        for (int i = 0; i < k; i++) cout << v[idx[i]] << " ";
        cout << "\n";
        sinh();
    }
    return 0;
}