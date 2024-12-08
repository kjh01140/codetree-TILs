#include <iostream>
#include <cstring> // memset 사용
using namespace std;

const int OFFSET = 100000; // 좌표 오프셋
const int MAX_COORD = 2 * OFFSET + 1; // 전체 좌표 크기

int main() {
    int n;
    cin >> n;

    int painted_white[MAX_COORD]; // 흰색 칠한 횟수 (R 방향)
    int painted_black[MAX_COORD]; // 검은색 칠한 횟수 (L 방향)
    int color[MAX_COORD];         // 현재 색상 (0: 기본, 1: 회색)

    // 배열 초기화
    memset(painted_white, 0, sizeof(painted_white));
    memset(painted_black, 0, sizeof(painted_black));
    memset(color, 0, sizeof(color));

    int curr = OFFSET; // 현재 위치 (중앙 시작)

    for (int i = 0; i < n; i++) {
        int x;
        char dir;
        cin >> x >> dir;

        if (dir == 'R') { // 오른쪽으로 칠하기
            for (int j = curr; j < curr + x; j++) {
                if (color[j] == 0) { // 아직 회색이 아니면
                    painted_white[j]++;
                    if (painted_white[j] >= 2 && painted_black[j] >= 2) {
                        color[j] = 1; // 회색으로 변경
                    }
                }
            }
            curr += x; // 현재 위치 업데이트
        } else if (dir == 'L') { // 왼쪽으로 칠하기
            for (int j = curr; j > curr - x; j--) {
                if (color[j] == 0) { // 아직 회색이 아니면
                    painted_black[j]++;
                    if (painted_white[j] >= 2 && painted_black[j] >= 2) {
                        color[j] = 1; // 회색으로 변경
                    }
                }
            }
            curr -= x; // 현재 위치 업데이트
        }
    }

    // 흰색, 검은색, 회색 칠해진 타일 개수 계산
    int white_count = 0, black_count = 0, gray_count = 0;
    for (int i = 0; i < MAX_COORD; i++) {
        if (color[i] == 1) {
            gray_count++;
        } else {
            // 회색이 아닌 경우에만 흰색/검은색 계산
            if (painted_white[i] > 0) white_count++;
            if (painted_black[i] > 0) black_count++;
        }
    }

    // 결과 출력
    cout << white_count << " " << black_count << " " << gray_count << endl;

    return 0;
}
