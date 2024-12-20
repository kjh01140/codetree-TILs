#include <iostream>
#include <algorithm>
using namespace std;
int price[1000]={};
int N, B; 

int ans = 0;
int main() {
    cin >> N >> B;
    for(int i=0; i<N; i++){
        cin >> price[i];
    }

    // 순서에 구애받지 않고 최대 인원에게 주기 위해 정렬
    sort(price, price+N);

    for(int i=0; i<N; i++){ // 할인하는 학생 선정
        int cnt=0;
        int money = B;
        for(int j=0; j<N; j++){
            if(j==i){
                money-=price[j]/2;
                cnt++; // 선물받은 학생수                
            } else{                    
                money-=price[j];
                cnt++; // 선물받은 학생수
            }

            if(money<0){
                cnt--;
                break;
            }
        }
        ans = max(ans, cnt);
    }
    
    cout << ans;
    // 여기에 코드를 작성해주세요.
    return 0;
}
