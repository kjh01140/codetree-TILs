#include <iostream>
using namespace std;

int Func2(int n){
    if(n<10) return n;
    return Func2(n/10)+(n%10);
}



int main() {
    int x,y,z;
    cin >> x >> y >> z;
    cout << Func2(x*y*z);
    // 여기에 코드를 작성해주세요.
    return 0;
}