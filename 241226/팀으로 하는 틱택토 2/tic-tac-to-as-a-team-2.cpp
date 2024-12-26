#include <iostream>
#include <algorithm>
using namespace std;

int arr[3][3];          // 틱택토 보드 저장
int team[36][2];        // 최대 36개의 팀 저장 (9C2 = 36)
int team_num = 0;       // 팀의 개수

// 한 줄의 숫자 배열에서 팀이 승리할 수 있는지 확인하는 함수
void checkLine(int a, int b, int c) {
    int num[10] = {0}; // 숫자 등장 횟수 저장 (1~9)
    num[a]++;
    num[b]++;
    num[c]++;

    int candidates[3] = {0}; // 등장한 숫자 저장 (최대 3개)
    int candidate_count = 0;

    // 등장한 숫자를 candidates 배열에 저장
    for (int i = 1; i <= 9; i++) {
        if (num[i] > 0) {
            candidates[candidate_count++] = i;
        }
    }

    // 두 종류 이상의 숫자가 등장한 경우 팀 조합 생성
    if (candidate_count == 2) {
        for (int i = 0; i < candidate_count; i++) {
            for (int j = i + 1; j < candidate_count; j++) {
                int x = candidates[i];
                int y = candidates[j];

                // 팀이 이미 존재하는지 확인
                bool isDuplicate = false;
                for (int k = 0; k < team_num; k++) {
                    if ((team[k][0] == x && team[k][1] == y) ||
                        (team[k][0] == y && team[k][1] == x)) {
                        isDuplicate = true;
                        break;
                    }
                }

                // 중복되지 않으면 팀 추가
                if (!isDuplicate) {
                    team[team_num][0] = x;
                    team[team_num][1] = y;
                    team_num++;
                }
            }
        }
    }
}

int main() {
    // 3x3 배열 입력
    for (int i = 0; i < 3; i++) {
        string line;
        cin >> line;
        for (int j = 0; j < 3; j++) {
            arr[i][j] = line[j] - '0';
        }
    }

    // 가로 줄 확인
    for (int i = 0; i < 3; i++) {
        checkLine(arr[i][0], arr[i][1], arr[i][2]);
    }

    // 세로 줄 확인
    for (int i = 0; i < 3; i++) {
        checkLine(arr[0][i], arr[1][i], arr[2][i]);
    }

    // 우하향 대각선 확인
    checkLine(arr[0][0], arr[1][1], arr[2][2]);

    // 우상향 대각선 확인
    checkLine(arr[2][0], arr[1][1], arr[0][2]);

    // 결과 출력
    cout << team_num << endl;
    return 0;
}
