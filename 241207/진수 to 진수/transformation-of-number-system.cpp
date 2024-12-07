#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b; cin >> a >> b;
    string n; cin >> n;

    string binary;
    binary = n;
    int length = binary.length();
    int num = 0;

    for(int i = 0; i < length; i++)
        num = num * a + (binary[i]-'0');
    
    int digits[10]={};
    int cnt=0;
    while(true){
        if(num<b){
            digits[cnt]=num;
            break;
        }
        digits[cnt++] = num%b;
        num /= b;
    }

    for(int i=cnt; i>=0; i--){
        cout << digits[i];
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}