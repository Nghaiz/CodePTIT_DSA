#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int n;
vector<string> ans;

void Try(int a[], int idx, vector<int> &tmp){
    for (int i = idx; i < n; i++){
        if (tmp.empty() || a[i] > tmp.back()){
            tmp.push_back(a[i]);

            if (tmp.size() >= 2){
                string s = "";
                for (int x : tmp) s += to_string(x) + " ";
                ans.push_back(s);
            }

            Try(a, i + 1, tmp);
            tmp.pop_back();
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    int a[n];
    for (int &x : a) cin >> x;

    vector<int> tmp;
    Try(a, 0, tmp);

    sort(begin(ans), end(ans));
    for (string x : ans) cout << x << "\n";
    return 0;
}