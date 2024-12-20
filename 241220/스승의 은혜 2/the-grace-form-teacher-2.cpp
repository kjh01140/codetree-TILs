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

    
    
        
        for(int i=0; i<N; i++){ // 할인하는 학생 선정
            bool check = true;int cnt=0;
            while(check){
                int money = B;
                cnt = 0;
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
                        check = false;
                    }

                }
                
            }
            ans = max(ans, cnt);
        }
    
    
    cout << ans;
    // 여기에 코드를 작성해주세요.
    return 0;
}