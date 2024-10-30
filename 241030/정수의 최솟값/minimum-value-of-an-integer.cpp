#include <iostream>
using namespace std;
int Func(int a,int b, int c){
    int min;
    if (a<b && a<c){
        min =a;
    } else if (b<c && b<a){
        min = b;

    } else{
        min =c;
    }
    return min;
}

int main() {
    int a,b,c ;
    cin >> a >>b >>c;
    cout << Func(a,b,c);
    // 여기에 코드를 작성해주세요.
    return 0;
}