#include <bits/stdc++.h>
using namespace std;

bool valid(int num) {
    return num >= 10 && num <= 99;
}

bool evaluate(int left, char op, int right, int result) {
    switch (op) {
        case '+': return left + right == result;
        case '-': return left - right == result;
        case '*': return left * right == result;
        case '/': return right != 0 && left % right == 0 && left / right == result;
        default: return false;
    }
}

vector<int> Try(string pattern) {
    vector<int> result;
    
    if (pattern.find('?') == string::npos) {
        bool isNum = true;
        for (char c : pattern) {
            if (!isdigit(c)) {
                isNum = false;
                break;
            }
        }
        
        if (isNum && !pattern.empty()) {
            int num = 0;
            for (char c : pattern) {
                num = num * 10 + (c - '0');
            }
            if (valid(num)) result.push_back(num);
        }
    }
    
    for (int num = 10; num <= 99; num++) {
        string tmp = to_string(num);
        bool found = true;
        
        for (int i = 0; i < pattern.size(); i++) {
            if (pattern[i] != '?' && pattern[i] != tmp[i]) {
                found = false;
                break;
            }
        }
        
        if (found) result.push_back(num);
    }
    return result;
}

string solve(string s) {
    stringstream ss(s);
    string left_str, op_str, right_str, equals, result_str;
    
    if (!(ss >> left_str >> op_str >> right_str >> equals >> result_str) || equals != "=") {
        return "WRONG PROBLEM!";
    }
    
    vector<char> ops;
    if (op_str == "?") {
        ops = {'+', '-', '*', '/'};
    } 
    else if (op_str.size() == 1 && (op_str[0] == '+' || op_str[0] == '-' || op_str[0] == '*' || op_str[0] == '/')) {
        ops = {op_str[0]};
    } 
    else return "WRONG PROBLEM!";
    
    vector<int> leftVals = Try(left_str);
    vector<int> rightVals = Try(right_str);
    vector<int> resultVals = Try(result_str);
    
    for (int left : leftVals) {
        for (int right : rightVals) {
            for (int result : resultVals) {
                for (char op : ops) {
                    if (evaluate(left, op, right, result)) {
                        return to_string(left) + " " + op + " " + to_string(right) + " = " + to_string(result);
                    }
                }
            }
        }
    }
    return "WRONG PROBLEM!";
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s;
        getline(cin, s);
        cout << solve(s) << "\n";
    }
    return 0;
}