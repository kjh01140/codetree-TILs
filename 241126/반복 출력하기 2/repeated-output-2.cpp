#include <iostream>
using namespace std;
void Print(int N){
    if(N==0) return;
    Print(N-1);
    cout << "HelloWorld" << endl ;
}

int main() {
    int N;
    cin >> N;
    Print(N);
    // 여기에 코드를 작성해주세요.
    return 0;
}