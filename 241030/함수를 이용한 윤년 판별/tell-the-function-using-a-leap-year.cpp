#include <iostream>
using namespace std;

bool Func2 (int n ){
    if (n%100==0 && n%400!=0) {
        return false;
    }else {
        return true;
    }
}

bool Func1 (int n ){
    if (n%4==0) {
        return Func2(n);
    }else {
        return false;
    }
}




int main() {
    int y;
    cin >> y;

    if(Func1(y)){
        cout << "true";
    } else{
        cout << "false";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}