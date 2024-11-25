#include <iostream>
using namespace std;

void Func(int &a,int &b){
    if(a<b){
        a+=10;
        b*=2;
    } else{
        b+=10;
        a*=2;
    }
}
int main() {
    int a,b;
    cin >> a >> b;

    Func(a,b);
    cout << a <<" "<< b;
    // 여기에 코드를 작성해주세요.
    return 0;
}