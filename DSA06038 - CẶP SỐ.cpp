#include <bits/stdc++.h>
using namespace std;

class FenwickTree {
private:
    vector<int> bit;
    int n;
public:
    FenwickTree(int size) : n(size), bit(size + 1, 0) {}
    
    void update(int idx, int val) {
        for (; idx <= n; idx += idx & -idx) bit[idx] += val;
    }
    
    int query(int idx) {
        int sum = 0;
        for (; idx > 0; idx -= idx & -idx) sum += bit[idx];
        return sum;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    
    vector<vector<int>> tmp(n);
    int idx = -1;
    
    for (int i = 0; i < n; i++) {
        if (a[i] & 1) idx = i;
        else if (idx != -1){ 
            tmp[idx].push_back(a[i]);
        }
    }
    
    const int MAX_VAL = 1e6 + 5;
    FenwickTree fenwick(MAX_VAL);
    long long res = 0;
    int last_proc = 0;
    
    for (int odd_idx = 0; odd_idx < n; odd_idx++) {
        if (a[odd_idx] % 2 == 0 || tmp[odd_idx].empty()) continue;
            
        while (last_proc < odd_idx) {
            if (a[last_proc] % 2 == 0) fenwick.update(a[last_proc], 1);
            last_proc++;
        }
        
        for (int even_val : tmp[odd_idx]) {
            res += fenwick.query(MAX_VAL) - fenwick.query(even_val);
        }
    }
    cout << res << "\n";
    return 0;
}