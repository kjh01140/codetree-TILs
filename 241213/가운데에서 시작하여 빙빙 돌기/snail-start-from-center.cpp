#include <iostream>
using namespace std;

int n;
int arr[102][102] = {};
int num = 2; //두번째부터
int x = 0, y = 0, dir = 0; // 방향 초기값: 오른쪽으로 시작

// 방향: 오른쪽, 위, 왼쪽, 아래
int dx[4] = {0, -1, 0, 1};
int dy[4] = {1, 0, -1, 0};



void Move(int &x, int &y, int &dir, int &num) { //기본적으로 1부터는 방향전환 1순위 , 직진 2순위
    while (num <= n * n) {
        arr[x][y] = num++; // 현재 위치에 숫자 채우기
        
        dir = (dir + 1) % 4; //1순위는 방향변경후 한칸이동
        int nx = x + dx[dir];
        int ny = y + dy[dir];
        
        // 채워진 경우 전진
        if (arr[nx][ny] != 0 ) {
            dir = (dir+3)%4;
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
    arr[x][y]= 1; //첫번째 1입력
    y++;          //두번째 부터 시작
    dir = 1;
    
    Move(x, y, dir, num);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
