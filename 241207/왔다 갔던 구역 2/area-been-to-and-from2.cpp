#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int location[2001] = {};    // 구간 방문 여부
    int direction[2001] = {};   // 이동 방향 기록 (-1: 왼쪽, +1: 오른쪽)
    int curr = 1000;            // 초기 위치 (중앙)

    for (int i = 0; i < n; i++) {
        int x;
        char dir;
        cin >> x >> dir;

        if (dir == 'R') {
            for (int j = curr; j < curr + x; j++) {
                if (direction[j] == -1) location[j] = 1; // 왼쪽 이동한 적이 있음
                direction[j] = 1; // 오른쪽 이동 기록
            }
            curr += x;
        } else { // L
            for (int j = curr - 1; j >= curr - x; j--) {
                if (direction[j] == 1) location[j] = 1; // 오른쪽 이동한 적이 있음
                direction[j] = -1; // 왼쪽 이동 기록
            }
            curr -= x;
        }
    }

    int cnt = 0;
    for (int i = 0; i < 2001; i++) {
        if (location[i] == 1) cnt++; // 양방향 모두 이동한 구간 카운트
    }

    cout << cnt << endl;
    return 0;
}
