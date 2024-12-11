#include <iostream>
using namespace std;

int arr[100][100];
int cnt=0;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

bool InRange(int x, int y, int n){
    return(0<=x && x<=n && 0<=y && y<=n);
}

bool check(int x, int y, int n){
    int count = 0;
    for(int dir_num = 0; dir_num < 4; dir_num++){
        int nx = x + dx[dir_num], ny = y + dy[dir_num];
        if(InRange(x, y, n) && arr[nx][ny]==1) count++;
    }
    if(count >=3) return true;
    else return false;
}


int main() {
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if( check(i, j, n) ) cnt++;
        }
    }

    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}