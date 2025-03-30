#include <bits/stdc++.h>
using namespace std;

int t, n;

void print(vector<int> row, int len){
    cout << '[';
    for (int i = 0; i < len; i++){
        cout << row[i] << (i == len - 1 ? "" : " ");
    }
    cout << "]\n";
    return;
}

void Try(vector<vector<int>> &v, int level){
    vector<int> current = v.back();
    int len = current.size();
    print(current, len);

    if (level == n) return;

    vector<int> next;
    for (int i = 0; i < len - 1; i++){
        next.push_back(current[i] + current[i + 1]);
    }
    v.push_back(next);
    Try(v, level + 1);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while (t--){
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        vector<vector<int>> v = {a};
        Try(v, 1);   
    }
    return 0;
}