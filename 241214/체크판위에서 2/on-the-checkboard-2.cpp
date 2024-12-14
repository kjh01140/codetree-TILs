#include <iostream>
using namespace std;

char arr[16][16] = {};
int result = 0;

int main() {
    int R, C;
    cin >> R >> C;

    // 직사각형 색 정보 입력
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> arr[i][j];
        }
    }

    // 첫 번째 점프 탐색
    for (int i1 = 1; i1 < R - 1; i1++) {  // 첫 번째 점프의 행 (도착 지점 제외)
        for (int j1 = 1; j1 < C - 1; j1++) {  // 첫 번째 점프의 열 (도착 지점 제외)
            if (arr[i1][j1] != arr[0][0]) {  // 첫 번째 점프 조건: 색이 다름

                // 두 번째 점프 탐색
                for (int i2 = i1 + 1; i2 < R; i2++) {  // 두 번째 점프의 행
                    for (int j2 = j1 + 1; j2 < C; j2++) {  // 두 번째 점프의 열
                        if (arr[i2][j2] != arr[i1][j1]) {  // 두 번째 점프 조건: 색이 다름

                            // 도착 지점 확인
                            if (i2 == R - 1 && j2 == C - 1) {
                                result++;  // 유효한 경로 카운트
                            }
                        }
                    }
                }
            }
        }
    }

    // 결과 출력
    cout << result << endl;

    return 0;
}
