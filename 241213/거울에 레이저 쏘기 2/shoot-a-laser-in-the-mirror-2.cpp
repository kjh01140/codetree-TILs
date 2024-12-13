#include <iostream>
using namespace std;

int x = 0, y = 0, dir = -1;
int cnt = 0;
char arr[1002][1002] = {};

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

bool InRange(int x, int y, int N) {
    return 1 <= x && x <= N && 1 <= y && y <= N;
}

void Move(int &x, int &y, int &dir, int &N) {
    while (true) {
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if (!InRange(nx, ny, N)) break;

        // 방향 전환
        if (arr[nx][ny] == '\\') {
            if (dir == 0) dir = 1;
            else if (dir == 1) dir = 0;
            else if (dir == 2) dir = 3;
            else if (dir == 3) dir = 2;
            cnt++;
        } else if (arr[nx][ny] == '/') {
            if (dir == 0) dir = 3;
            else if (dir == 1) dir = 2;
            else if (dir == 2) dir = 1;
            else if (dir == 3) dir = 0;
            cnt++;
        }

        x = nx;
        y = ny;
    }

    
}

void Find_startpoint(int K, int N) {
    if (K <= N) {
        x = 0;
        y = K;
        dir = 1; // 아래 방향
    } else if (K <= 2 * N) {
        x = K - N;
        y = N + 1;
        dir = 2; // 왼쪽 방향
    } else if (K <= 3 * N) {
        x = N + 1;
        y = 3 * N + 1 - K;
        dir = 3; // 위쪽 방향
    } else {
        x = 4 * N + 1 - K;
        y = 0;
        dir = 0; // 오른쪽 방향
    }
}

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            cin >> arr[i][j];
        }
    }

    int K;
    cin >> K;
    Find_startpoint(K, N);

    Move(x, y, dir, N);

    cout << cnt;
    return 0;
}
