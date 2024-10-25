#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        if( i%10==3 || i%10==6 || i%10==9 || i%3==0){
            cout << "0" << " ";
        }else{
            cout << i << " ";
        }
    } 
    // 여기에 코드를 작성해주세요.
    return 0;
}