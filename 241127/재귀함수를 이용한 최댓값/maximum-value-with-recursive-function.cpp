#include <iostream>
using namespace std;

int result=0;
void Func(int n){
    if(n>result) result=n;


}

int main() {
    int n;
    cin >> n;
    for(int i=0; i<n ;i++){
        int num;
        cin >> num;
        Func(num);
    }
    cout << result;
    // 여기에 코드를 작성해주세요.
    return 0;
}