#include <iostream>
#include <string>
using namespace std;


bool In369(int n){
    string Numstr = to_string(n);
    for(char c :Numstr){
        if(c == '3'||c == '6'||c == '9' ) return true;
    }
    return false;
}

int main() {
    int a,b,cnt=0;
    cin >> a >> b;
    for(int i=a;i<=b;i++){
        if(i%3==0 || In369(i)) cnt++;
    }
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}