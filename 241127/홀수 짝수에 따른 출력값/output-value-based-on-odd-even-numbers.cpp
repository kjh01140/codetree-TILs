#include <iostream>
using namespace std;

int Odd(int n){

    if(n==1) return 1;
    if(n%2==0) {
        return Odd(n-1);
    } else{
        return Odd(n-1)+n;
    }
 
}
int Even(int n){

    if(n==1) return 1;
    if(n%2==1) {
        return Even(n-1);
    } else{
        return Even(n-1)+n;
    }
 
}

int Decider(int n){
    if (n%2==1) return Odd(n);
    if (n%2==0) return Even(n);
}

int main() {
    int N;
    cin >> N;
    cout << Decider(N);
    // 여기에 코드를 작성해주세요.
    return 0;
}