#include <iostream>
using namespace std;

int n, m;
char arr[101][101] = {}; // 알파벳을 저장할 배열
int num = 0; // 현재 알파벳의 인덱스 (A: 0, ..., Z: 25)
int x = 0, y = 0, dir = 0; // 방향 초기값: 오른쪽으로 시작
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

bool InRange(int x, int y) {
    return 0 <= x && x < n && 0 <= y && y < m && arr[x][y] == 0;
}

void Move(int &x, int &y, int &dir, int &num) {
    for (int i = 0; i < n * m; i++) {
        arr[x][y] = 'A' + (num % 26); // 현재 위치에 알파벳 채우기
        num++;

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
