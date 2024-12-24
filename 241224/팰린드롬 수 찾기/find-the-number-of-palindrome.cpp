#include <iostream>
#include <string>
using namespace std;


bool Check_P(int n){
    string str_n = to_string(n);
    int len_n = str_n.length();
    for(int i=0; i<len_n; i++){
        if(str_n[i] != str_n[len_n-1 - i]){
            return false;
        }
    }
    return true;
}

int cnt = 0;

int main() {
    int X ,Y; cin >> X >> Y;

    for(int i=X; i<=Y; i++){
        if(Check_P(i))cnt++;
    }

    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}