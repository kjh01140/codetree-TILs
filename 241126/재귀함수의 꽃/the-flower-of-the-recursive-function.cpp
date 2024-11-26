#include <iostream>
using namespace std;
void Func(int n){
    if(n==0)return;

    cout << n << " ";
    Func(n-1);
    cout << n << " ";

}

int main() {
    int N;
    cin >> N;
    Func(N);
    // 여기에 코드를 작성해주세요.
    return 0;
}