#include <iostream>
using namespace std;

int main() {
    int N, B, digits[8]={},cnt=0;
    cin >> N >> B;

    while(true){
        if(N<B){
            digits[cnt]=N;
            break;
        }
        
        digits[cnt++] = N%B;
        N/=B;
    }

    for(int i= cnt; i>=0;i--){
        cout<<digits[i];
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}