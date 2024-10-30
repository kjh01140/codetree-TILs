#include <iostream>
using namespace std;
void Func(int n, int m){
    for(int i=n; ; i++){
        if (i%n==0 && i%m==0){
            cout << i;
            break;
        }
    }
}

int main() {
    int n,m;
    cin >> n >> m;
    Func(n,m);
    // 여기에 코드를 작성해주세요.
    return 0;
}