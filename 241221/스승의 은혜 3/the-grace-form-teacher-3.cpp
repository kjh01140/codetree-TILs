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
    sort(presents, presents + N, cmp);

    // 모든 선물을 할인 대상으로 고려
    for (int i = 0; i < N; i++) { // `i`는 할인 대상
        int cnt = 0;     // 선물받은 학생 수
        int money = B;   // 남은 예산

        for (int j = 0; j < N; j++) {
            if (j == i) { // `i`번째 선물을 할인 적용
                money -= (presents[j].price / 2) + presents[j].deliver;
            } else { // 나머지 선물은 원래 가격
                money -= presents[j].price + presents[j].deliver;
            }

            // 예산 초과 시 중단
            if (money < 0) break;

            // 선물받은 학생 수 증가
            cnt++;
        }

        // 최대값 갱신
        ans = max(ans, cnt);
    }

    cout << ans << endl;
    return 0;
}
