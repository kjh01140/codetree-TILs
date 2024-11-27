#include <iostream>
using namespace std;
int cnt=0;

int Func(int n){
    if(n==1) return cnt;

    if(n%2==0){
        cnt++;
        return Func(n/2);
    } else{
        cnt++;
        return Func(n/3);
    }
}

int main() {
    int N;
    cin >> N;
    cout << Func(N);
    // 여기에 코드를 작성해주세요.
    return 0;
}