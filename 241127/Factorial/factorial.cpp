#include <iostream>
using namespace std;
int Fact(int n){
    if(n==0 || n==1) return 1;
    return Fact(n-1)*n;
}

int main() {
    int N;
    cin >> N;
    cout << Fact(N);
    // 여기에 코드를 작성해주세요.
    return 0;
}