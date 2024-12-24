#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c; cin >> a >> b >> c;
    int ans = 0;
    for(int i=0; i<1000; i++){
        for(int j=0; j<1000;j++){
            if(a*i + b*j <= c){
                ans = max(ans, a*i + b*j);
            } 
        }
    }
    cout << ans;


    // 여기에 코드를 작성해주세요.
    return 0;
}