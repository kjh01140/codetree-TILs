#include <iostream>
#include <algorithm>
using namespace std;

int ans = 0;
int main() {
    int X, Y; cin >> X >> Y;

    for(int i=X ; i<=Y; i++){
        int num = i;
        int sum = 0;
        while(true){
            sum+= num%10; //일의 자리 합
             num = num/10; 
            if(num < 10) {
                sum += num;
                break;
            }
        }
        ans = max(ans, sum);
    }
    cout << ans;
    // 여기에 코드를 작성해주세요.
    return 0;
}