#include <iostream>
#include <algorithm>
using namespace std;

class InputList {
public:
    int t, x, y;
    
    // 기본 생성자 및 파라미터 생성자
    InputList(int t = 0, int x = 0, int y = 0) : t(t), x(x), y(y) {}
};

bool cmp(const InputList &a, const InputList &b) {
    return a.t < b.t; // 시간순으로 정렬
}

int main() {
    int N, K, P, T;
    cin >> N >> K >> P >> T;

    InputList inputs[250]; // 최대 250개의 악수 정보 저장

    // 악수 정보 입력
    for (int i = 0; i < T; i++) {
        cin >> inputs[i].t >> inputs[i].x >> inputs[i].y;
    }

    // 감염 여부와 전염 가능 횟수를 저장하는 배열
    int infected[101] = {0}; // 1-indexed, 초기값 0
    int remain_transmission[101] = {0}; // 1-indexed, 초기값 0

    // 초기 감염 설정
    infected[P] = 1;
    remain_transmission[P] = K;

    // 악수 정보를 시간순으로 정렬
    sort(inputs, inputs + T, cmp);

    // 모든 악수 정보 처리
    for (int i = 0; i < T; i++) {
        int t = inputs[i].t;
        int x = inputs[i].x;
        int y = inputs[i].y;

        // x나 y가 감염되어 있고, 전염 가능한 악수 횟수가 남아 있는 경우
        if ((infected[x] && remain_transmission[x] > 0) || (infected[y] && remain_transmission[y] > 0)) {
            if (!infected[x]) { // x가 감염되지 않았다면
                infected[x] = 1;
                remain_transmission[x] = K;
            } else if (infected[x] && remain_transmission[x] > 0) {
                remain_transmission[x]--;
            }

            if (!infected[y]) { // y가 감염되지 않았다면
                infected[y] = 1;
                remain_transmission[y] = K;
            } else if (infected[y] && remain_transmission[y] > 0) {
                remain_transmission[y]--;
            }
        }
    }

    // 결과 출력
    for (int i = 1; i <= N; i++) {
        cout << infected[i];
    }
    cout << endl;

    return 0;
}
