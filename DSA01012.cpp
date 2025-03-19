#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int total = 1 << n;
        
        for (int i = 0; i < total; i++) {
            bitset<10> b(i); 
            bitset<10> gray = b ^ (b >> 1);
            
            for (int j = n - 1; j >= 0; j--) cout << gray[j];
            if (i != total - 1) cout << " ";
        }
        cout << "\n";
    }
    return 0;
}