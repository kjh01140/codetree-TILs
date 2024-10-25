#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a>>b;
    int i=a;
    
    while(i<=b){
        cout << i<< " ";
        if(i%2==0){
            i+=3;
        }else{
            i*=2;
        }
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}