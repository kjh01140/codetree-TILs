#include <iostream>
using namespace std;

int Func(int n){
    if(n==1 || n==2) return 1;
    
    return Func(n-1)+Func(n-2);
}

int main() {
    int N;
    cin >> N;
    cout << Func(N);
    // 여기에 코드를 작성해주세요.
    return 0;
}