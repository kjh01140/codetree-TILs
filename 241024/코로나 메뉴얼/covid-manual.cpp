#include <iostream>
using namespace std;

int main() {
    char a;
    int b,cnt=0;

    for(int i=0;i<4;i++){
        cin >> a >> b;
        if (b>=27 && a=='Y') cnt++;
    }
    if(cnt>=2){
        cout << "E";
    } else {
        cout << "N";
    }


    // 여기에 코드를 작성해주세요.
    return 0;
}