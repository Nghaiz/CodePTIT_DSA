#include <bits/stdc++.h>
using namespace std;

int n, k, target, sum = 0, ans = 0;

void Try(vector<int> prefix, int pos, int cnt, int last_idx){
    if (cnt == k - 1){
        //check nhom cuoi cung
        if (prefix[n] - prefix[last_idx] == target){
            ++ans;
        }
    }
    for (int i = pos; i < n; i++){
        int grp_sum = prefix[i] - prefix[last_idx];
        if (grp_sum == target){
            Try(prefix, i + 1, cnt + 1, i);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> k;
    int a[n];
    for (int &x : a){
        cin >> x;
        sum += x;
    }
    target = sum / k;
    
    vector<int> prefix(n + 1, 0);
    for (int i = 0; i < n; i++){
        prefix[i + 1] = prefix[i] + a[i]; 
    }
    Try(prefix, 1, 0, 0);
    cout << ans;
    return 0;
}