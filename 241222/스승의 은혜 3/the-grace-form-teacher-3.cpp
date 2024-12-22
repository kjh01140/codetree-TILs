#include <iostream>
#include <algorithm>
using namespace std;

class Present {
public:
    int price;
    int deliver;

    Present(int price, int deliver) {
        this->price = price;
        this->deliver = deliver;
    }
    Present() {}
};

// 전체 비용 기준 정렬
bool cmp(Present a, Present b) {
    return (a.price + a.deliver) < (b.price + b.deliver);
}

int N, B;
int ans = 0;

int main() {
    Present presents[1000];

    cin >> N >> B;
    for (int i = 0; i < N; i++) {
        cin >> presents[i].price >> presents[i].deliver;
    }

    // 정렬: 전체 비용 기준
    

    // 모든 선물을 할인 대상으로 고려
    for (int i = 0; i < N; i++) { // `i`는 할인 대상
        int cnt = 0;     // 선물받은 학생 수
    
        Present Temp_presents[1000] = {}; //임시 배열 생성후 매번 초기화
        for(int j=0; j<N; j++){ //복사과정
            Temp_presents[j].price = presents[j].price;
            Temp_presents[j].deliver = presents[j].deliver;
        }

        Temp_presents[i].price /= 2; //할인대상 미리 가격 조정 
        sort(Temp_presents, Temp_presents+N, cmp);

        int temp = 0;
        for(int j=0; j<N; j++){
            temp += Temp_presents[j].price + Temp_presents[j].deliver;
            if(temp > B) break;
            cnt++;
        }

        // 최대값 갱신
        ans = max(ans, cnt);
        
    }

    cout << ans << endl;
    return 0;
}
