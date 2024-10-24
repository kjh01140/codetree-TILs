#include <iostream>
using namespace std;

int main() {
    int a,b,j;
    cin >> a >> b;

    cout << a/b << ".";
    j= a%b;

    for(int i=0; i<20; i++){
        cout << (j*10)/b;
        j = (j*10) %b;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}