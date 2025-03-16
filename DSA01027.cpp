#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int n, a[15];
bool ok = true;

void init(){
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1);
}

void sinh(){
    int i = n - 1;
    while (i >= 1 && a[i] > a[i + 1]) --i;

    if (i == 0) ok = false;
    else {
        int j = n;
        while (a[i] > a[j]) --j;
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    init();
    while (ok){
        for (int i = 1; i <= n; i++) cout << a[i] << " ";
        cout << "\n";

        sinh();
    }
    return 0;
}