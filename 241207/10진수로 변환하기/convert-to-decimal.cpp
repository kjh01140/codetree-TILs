#include <iostream>
#include <string>
using namespace std;

int main() {
    string binary;
    cin >> binary;  
    int length = binary.length() , sum=0;

    for(int i=0; i<length; i++){
        sum = sum*2 + (binary[i]-'0');
    }

    cout << sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}