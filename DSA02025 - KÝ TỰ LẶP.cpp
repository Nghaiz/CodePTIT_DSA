#include <bits/stdc++.h>
using namespace std;

int n, ans = INT_MAX;
vector<string> v;
vector<vector<int>> mat;
vector<bool> used;
vector<int> path;

void Try(int cnt){
    if (path.size() == n){
        ans = min(ans, cnt);
    }

    if (cnt >= ans) return;

    for (int i = 0; i < n; i++){
        if (!used[i]){
            used[i] = 1;

            int tmp = cnt;
            if (!path.empty()){
                int prev = path.back();
                tmp += mat[prev][i];
            }

            path.push_back(i);
            Try(tmp);
            path.pop_back();
            used[i] = 0;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    v.resize(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    //Luu lai so ki tu giong nhau giua 2 xau bat ki
    mat.resize(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i != j){
                for (char c : v[i]){
                    if (v[j].find(c) != string::npos){
                        ++mat[i][j];
                    }
                }
            }
        }
    }
    //Danh dau xem xau nao da duoc su dung
    used.resize(n, false);
    Try(0);
    cout << ans;
    return 0;
}