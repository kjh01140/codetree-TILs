#include <iostream>
using namespace std;

int n, m;
int arr[101][101] = {};
int num = 1;
int x = 0, y = 0, dir = 0; // 방향 초기값: 아래로 시작

int dx[4] = {1, 0, -1, 0}; // 방향: 아래, 오른쪽, 위, 왼쪽
int dy[4] = {0, 1, 0, -1};

bool InRange(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < m && arr[x][y] == 0;
}

void Move(int &x, int &y, int &dir, int &num) {
    while (num <= n * m) {
        arr[x][y] = num++; // 현재 위치에 숫자 채우기

        int nx = x + dx[dir];
        int ny = y + dy[dir];

        // 범위를 벗어나거나 이미 채워진 경우 방향 변경
        if (!InRange(nx, ny)) {
            dir = (dir + 1) % 4; // 다음 방향으로 변경
            nx = x + dx[dir];
            ny = y + dy[dir];
        }

        x = nx;
        y = ny;
    }
}

int main() {
    cin >> n >> m;

    Move(x, y, dir, num);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
