#include <iostream>
#include <algorithm>
using namespace std;

class Present{
    public:
        int price;
        int deliver;

        Present(int price, int deliver){
            this -> price = price;
            this -> deliver = deliver;
        }
        Present(){}
};

bool cmp(Present a, Present b){
    return a.price + a.deliver < b.price + b.deliver ;
}


int N, B; 
int ans = 0;

int main() {
    Present presents[1000];

    cin >> N >> B;
    for(int i=0; i<N; i++){
        cin >> presents[i].price >> presents[i].deliver;
    }

    // 순서에 구애받지 않고 최대 인원에게 주기 위해 정렬
    sort(presents, presents+N, cmp);

    for(int i=0; i<N; i++){ // 할인하는 학생 선정
        int cnt=0;
        int money = B;
        for(int j=0; j<N; j++){
            if(j==i){
                 money -= presents[j].price / 2 + presents[j].deliver;
                          
            } else{                    
                money -= presents[j].price + presents[j].deliver;
                
            }

            if(money<0)break;
            
            cnt++;
        }
        ans = max(ans, cnt);
    }
    
    cout << ans;
    // 여기에 코드를 작성해주세요.
    return 0;
}
