#include <iostream>
using namespace std;

void Positive(int N){
    if(N==0) return;
    
    Positive(N-1);
    cout << N << " ";
}

void Negative(int N){
    if(N==0) return;

    cout << N << " ";
    Negative(N-1);
    
}

int main() {
    int N;
    cin >> N;
    Positive(N);
    cout << endl;
    Negative(N);
    // 여기에 코드를 작성해주세요.
    return 0;
}