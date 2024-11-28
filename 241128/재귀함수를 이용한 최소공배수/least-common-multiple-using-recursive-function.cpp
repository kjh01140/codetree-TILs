#include <iostream>
using namespace std;

int GCD(int a, int b) {
    if(a == 0) return b;
    return GCD(b % a, a);
}

int LCM(int a, int b) {
    return (a * b) / GCD(a, b);
}

int main() {
    int N,first=1,result;
    cin >> N;
    for(int i=0; i<N; i++){
        int n;
        cin >> n;
        first=LCM(first,n);
        

    }
    cout << first;
    // 여기에 코드를 작성해주세요.
    return 0;
}