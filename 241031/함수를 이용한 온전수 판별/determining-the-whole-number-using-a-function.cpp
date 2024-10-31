#include <iostream>
using namespace std;


bool Decision (int n){
    if(n%2==0 || n%10==5 || (n%3==0 && n%9!=0)){
        return false;
    } else{
        return true;
    }

}


int main() {
    int a,b;
    int cnt=0;
    cin >> a >> b;

    for(int i=a; i<=b; i++){
        if(Decision(i))cnt++;
    }
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}