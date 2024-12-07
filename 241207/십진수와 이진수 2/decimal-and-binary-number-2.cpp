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

    sum*=17;

    int cnt=0, digits[11];
    while(true){
        if(sum<2){
            digits[cnt] = sum;
            break;
        }
        digits[cnt++] = sum%2;
        sum/=2; 
    }

    for(int i= cnt ; i>=0; i--){
        cout << digits[i];
    }

    
    // 여기에 코드를 작성해주세요.
    return 0;
}