#include <iostream>
#include <string>
using namespace std;

bool CheckP(const string &s) {
    int length = s.length();
    for (int i = 0; i < length / 2; i++) {
        if (s[i] != s[length - 1 - i]) {
            return false;
        }
    }
    return true;
}


int main() {
    string input;
    
    cin >> input;

    if (CheckP(input)) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}