#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a>>b;
    cout << a<< " ";
    for(int i=a ; i<b;i++){
        if(i%2==0){
            i+=3;
            cout << i << " ";
        } else{
            i*=2;
            cout << i << " ";
        }
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}