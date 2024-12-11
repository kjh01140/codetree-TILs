#include <iostream>
using namespace std;

int arr[100][100]={};
int n,m;

bool InRange(int x, int y) {
    return (0 <= x && x < n && 0 <= y && y < m);
}


int dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1, 0};
int x = 0, y = 0;           // 시작은 (0, 0) 입니다.
int dir_num = 0; 



int main() {
    arr[0][0]=1;
    cin >> n >> m;

    for(int i=2; i<=n*m; i++){
        int nx = x + dx[dir_num];
        int ny = y + dy[dir_num];

        if(!InRange(nx, ny) || arr[nx][ny] != 0){
            dir_num = (dir_num +1)%4;
        }
        x += dx[dir_num];
        y += dy[dir_num];

        arr[x][y] = i;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    // 여기에 코드를 작성해주세요.
    return 0;
}