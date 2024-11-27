#include <iostream>
using namespace std;

int sum=0;

int Square(int n){
    if(n<10) return n*n;

    return Square(n/10) + (n%10)*(n%10);
}

int main() {
    int N;
    cin >> N;
    sum += Square(N);
    cout << sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}