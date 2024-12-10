#include <iostream>
#include <algorithm>
using namespace std;

// 악수 정보를 저장하는 클래스
class input_list {
public:
    int t, x, y;

    // 생성자
    input_list(int t = 0, int x = 0, int y = 0) : t(t), x(x), y(y) {}
};

// 정렬 기준 함수 (시간순 정렬)
bool cmp(const input_list &a, const input_list &b) {
    return a.t < b.t;
}

int main() {
    int N, K, P, T; // N: 개발자 수, K: 전염 가능 횟수, P: 초기 감염자, T: 악수 정보 수
    cin >> N >> K >> P >> T;

    bool infected[100] = {false}; // 각 개발자의 감염 여부 (0: 비감염, 1: 감염)
    int infection_count[100] = {0}; // 각 개발자가 전염시킨 횟수

    infected[P - 1] = true; // 초기 감염자 설정 (0-based index)

    input_list inputs[250]; // 악수 정보를 저장
    for (int i = 0; i < T; i++) {
        int t, x, y;
        cin >> t >> x >> y;
        inputs[i] = input_list(t, x - 1, y - 1); // 0-based index로 변환
    }

    // 시간 순서대로 악수 정보를 정렬
    sort(inputs, inputs + T, cmp);

    // 각 악수 정보 처리
    for (int i = 0; i < T; i++) {
        int x = inputs[i].x; // x 개발자
        int y = inputs[i].y; // y 개발자

        // x가 감염 상태이고 전염 가능하면 y를 감염
        if (infected[x] && infection_count[x] < K) {
            infected[y] = true; // y 감염
            infection_count[x]++; // x의 전염 횟수 증가
        }

        // y가 감염 상태이고 전염 가능하면 x를 감염
        if (infected[y] && infection_count[y] < K) {
            infected[x] = true; // x 감염
            infection_count[y]++; // y의 전염 횟수 증가
        }
    }

    // 최종 감염 상태 출력
    for (int i = 0; i < N; i++) {
        cout << (infected[i] ? 1 : 0);
    }
    cout << endl;

    return 0;
}
