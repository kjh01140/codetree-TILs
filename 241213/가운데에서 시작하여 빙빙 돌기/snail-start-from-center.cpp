#include <iostream>
using namespace std;

int n;
int arr[102][102] = {};
int num = 1;
int x = 0, y = 0, dir = 0; // 방향 초기값: 오른쪽으로 시작

// 방향: 오른쪽, 위, 왼쪽, 아래
int dx[4] = {0, -1, 0, 1};
int dy[4] = {1, 0, -1, 0};

bool InRange(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < n && arr[x][y] == 0;
}

void Move(int &x, int &y, int &dir, int &num) {
    while (num <= n * n) {
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
    cin >> n;
    x = (n - 1) / 2; // 시작 위치: 가운데
    y = (n - 1) / 2;
    Move(x, y, dir, num);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
