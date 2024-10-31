#include <iostream>
using namespace std;

int ZG(int a,int b){
    int sum=1;
    for(int i=0; i<b; i++){
        sum*=a;
    }
    return sum;
}

int main() {
    int a,b;
    cin >> a >> b;
    cout << ZG(a,b);
    // 여기에 코드를 작성해주세요.
    return 0;
}