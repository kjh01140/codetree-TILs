#include <iostream>
using namespace std;

int ans_color = 0, ans_x = -1, ans_y = -1;

void Check(int x, int y, int arr[19][19]) {
    // 가로 탐색
    if (y + 4 < 19) { // 경계 검사
        bool check_x = true;
        for (int i = 0; i < 5; i++) {
            if (arr[x][y] != arr[x][y + i] || arr[x][y] == 0) {
                check_x = false;
                break;
            }
        }
        if (check_x) {
            ans_color = arr[x][y];
            ans_x = x;         // 가로에서는 행 번호 그대로
            ans_y = y + 2;     // 3번째 돌의 열 번호
            return;            // 정답 발견 시 즉시 종료
        }
    }

    // 세로 탐색
    if (x + 4 < 19) { // 경계 검사
        bool check_y = true;
        for (int i = 0; i < 5; i++) {
            if (arr[x][y] != arr[x + i][y] || arr[x][y] == 0) {
                check_y = false;
                break;
            }
        }
        if (check_y) {
            ans_color = arr[x][y];
            ans_x = x + 2;     // 3번째 돌의 행 번호
            ans_y = y;         // 세로에서는 열 번호 그대로
            return;            // 정답 발견 시 즉시 종료
        }
    }

    // 대각선 탐색 (↘ 방향)
    if (x + 4 < 19 && y + 4 < 19) { // 경계 검사
        bool check_diag = true;
        for (int i = 0; i < 5; i++) {
            if (arr[x][y] != arr[x + i][y + i] || arr[x][y] == 0) {
                check_diag = false;
                break;
            }
        }
        if (check_diag) {
            ans_color = arr[x][y];
            ans_x = x + 2;     // 대각선에서 3번째 돌의 행 번호
            ans_y = y + 2;     // 대각선에서 3번째 돌의 열 번호
            return;            // 정답 발견 시 즉시 종료
        }
    }

    // 역대각선 탐색 (↙ 방향)
    if (x + 4 < 19 && y - 4 >= 0) { // 경계 검사
        bool check_rev_diag = true;
        for (int i = 0; i < 5; i++) {
            if (arr[x][y] != arr[x + i][y - i] || arr[x][y] == 0) {
                check_rev_diag = false;
                break;
            }
        }
        if (check_rev_diag) {
            ans_color = arr[x][y];
            ans_x = x + 2;     // 역대각선에서 3번째 돌의 행 번호
            ans_y = y - 2;     // 역대각선에서 3번째 돌의 열 번호
            return;            // 정답 발견 시 즉시 종료
        }
    }
}

int main() {
    int arr[19][19] = {0}; // 바둑판 초기화
    for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 19; j++) {
            cin >> arr[i][j];
        }
    }

    // 바둑판 탐색
    for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 19; j++) {
            if (ans_color == 0) { // 정답이 발견되면 탐색 종료
                Check(i, j, arr);
            }
        }
    }

    // 결과 출력
    if (ans_color != 0) {
        cout << ans_color << endl;
        cout << ans_x + 1 << " " << ans_y + 1 << endl; // 1-indexed 좌표 출력
    } else {
        cout << 0;
    }

    return 0;
}
