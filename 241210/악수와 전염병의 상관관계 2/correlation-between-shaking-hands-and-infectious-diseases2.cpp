#include <iostream>
#include <algorithm>
using namespace std;

struct Handshake {
    int t, x, y;
};

bool compare(const Handshake &a, const Handshake &b) {
    return a.t < b.t; // 시간순 정렬 기준
}

int main() {
    int N, K, P, T;
    cin >> N >> K >> P >> T;

    Handshake handshakes[250]; // 최대 250개의 악수 정보를 저장

    // 악수 정보 입력
    for (int i = 0; i < T; i++) {
        cin >> handshakes[i].t >> handshakes[i].x >> handshakes[i].y;
    }

    // 감염 여부와 전염 가능 횟수를 저장하는 배열
    int infected[101] = {0}; // 1-indexed, 초기값 0
    int remain_transmission[101] = {0}; // 1-indexed, 초기값 0

    // 초기 감염 설정
    infected[P] = 1;
    remain_transmission[P] = K;

    // 악수 정보를 시간순으로 정렬
    sort(handshakes, handshakes + T, compare);

    // 모든 악수 정보 처리
    for (int i = 0; i < T; i++) {
        int t = handshakes[i].t;
        int x = handshakes[i].x;
        int y = handshakes[i].y;

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
