#include <iostream>
using namespace std;

char arr[16][16] = {};
int R, C;
int cnt = 0;

void dfs(int x, int y, int jumps, char prev_color) {
    // 현재 점프 횟수가 3를 초과하면 종료
    if (jumps > 3) return;

    // 도착 지점에 도달한 경우
    if (x == R - 1 && y == C - 1) {
        if (jumps == 3) cnt++;
        return;
    }

    // 가능한 점프 탐색
    for (int nx = x + 1; nx < R; nx++) {
        for (int ny = y + 1; ny < C; ny++) {
            if (arr[nx][ny] != prev_color) { // 색이 달라야 점프 가능
                dfs(nx, ny, jumps + 1, arr[nx][ny]);
            }
        }
    }
}

int main() {
    cin >> R >> C;

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> arr[i][j];
        }
    }

    // 시작점에서 탐색 시작
    dfs(0, 0, 0, arr[0][0]);

    cout << cnt << endl;

    return 0;
}
