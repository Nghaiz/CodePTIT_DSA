#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

void sapxep(int a[], int n, vector<vector<int>> v){
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++){
            if (a[i] > a[j]) swap(a[i], a[j]);
        }
        
        vector<int> tmp;
        for (int k = 0; k < n; k++) tmp.push_back(a[k]);
        v.push_back(tmp);
    }

    for (int i = v.size() - 1; i >= 0; i--){
        cout << "Buoc " << i + 1 << ": ";
        for (int x : v[i]) cout << x << " ";
        cout << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int a[n];
        for (int &x : a) cin >> x;

        vector<vector<int>> v;
        sapxep(a, n, v);
    }
    return 0;
}