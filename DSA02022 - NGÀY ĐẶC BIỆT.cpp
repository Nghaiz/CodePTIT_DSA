#include <bits/stdc++.h>
using namespace std;

void Try(int idx, string day){
    if (idx == 10){
        if (day.substr(0, 2) != "00"){
            cout << day << "\n";
        }
        return;
    }

    if (idx == 2 || idx == 5){
        day.push_back('/');
        Try(idx + 1, day);
        day.pop_back();
        return;
    }

    if (idx == 3){
        day.push_back('0');
        Try(idx + 1, day);
        day.pop_back();
        return;
    }

    if (idx == 4 || idx == 6){
        day.push_back('2');
        Try(idx + 1, day);
        day.pop_back();
        return;
    }

    for (char x : {'0', '2'}){
        day.push_back(x);
        Try(idx + 1, day);
        day.pop_back();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    Try(0, "");
    return 0;
}