#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

vector<string> v;
int t, n, a[100];

void Try(int i, int sum, int pos){
    for (int j = pos; j >= 1; j--){
        a[i] = j;
        sum += j;

        if (sum == n){
            string tmp = "(";
            for (int k = 1; k <= i; k++) {
                tmp += to_string(a[k]);
                if (k != i) tmp += " ";
            }
            tmp += ")";
            v.push_back(tmp);
        }
        else if (sum < n) {
            Try(i + 1, sum, j);
        }
        sum -= j;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while (t--){
        v.clear();

        cin >> n;
        Try(1, 0, n);
        cout << v.size() << "\n";
        for (string x : v) cout << x << " ";
        cout << "\n";
    }
    return 0;
}