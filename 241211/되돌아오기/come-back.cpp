#include <iostream>
using namespace std;

#define OFFSET 1000
int arr[2001][2001] = {};

int x = OFFSET;
int y = OFFSET;

int dx[4] = {0, 1, 0, -1}; // E, S, W, N
int dy[4] = {1, 0, -1, 0};

int GetDir(char dir) {
    if (dir == 'E') {
        return 0;
    } else if (dir == 'S') {
        return 1;
    } else if (dir == 'W') {
        return 2;
    } else {
        return 3;
    }
}

int Move(int dir, int dis) {
    for (int i = 0; i < dis; i++) {
        x += dx[dir];
        y += dy[dir];

        if (x == OFFSET && y == OFFSET) {
            return i + 1; // 시작점으로 돌아오는 데 걸린 시간 반환
        }

        // 방문 체크
        arr[x][y] = 1;
    }
    return 0; // 시작점에 도달하지 않음
}

int main() {
    arr[OFFSET][OFFSET] = 1;

    int N;
    cin >> N;

    int totalTime = 0;
    for (int i = 0; i < N; i++) {
        char dir;
        int dis;
        cin >> dir >> dis;

        int direction = GetDir(dir); // 방향 수치화
        int timeToReturn = Move(direction, dis);

        if (timeToReturn > 0) {
            totalTime += timeToReturn;
            cout << totalTime << endl; // 이동한 시간 출력
            return 0;
        }

        totalTime += dis;
    }

    cout << -1 << endl; // 끝까지 돌아오지 못한 경우
    return 0;
}
