#include <iostream>
using namespace std;
int N, M;
char arr[50][50] ;
int ans = 0; // LEE 갯수

bool CheckDirection(int x, int y, int dx, int dy){
    if(arr[x][y]!='L' ) return false;

    for(int i=1; i<3; i++){
        int nx = x + i * dx;
        int ny = y + i * dy;

        if( nx<0 || nx >=N || ny<0 || ny >=M) return false;

        if(arr[nx][ny] != 'E') return false; 
    }

    return true;

}


void Solve(){
    //int dx[4] = {0, 1, 1, 1}; //가로 세로 남동 남서
    //int dy[4] = {1, 0, 1, -1};

    int dx[8] = {0,1,1,1,0,-1,-1,-1};
    int dy[8] = {1,1,0,-1,-1,-1,0,1};
    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){

            for(int dir = 0; dir<8; dir++){
                if(CheckDirection(i,j,dx[dir],dy[dir])){
                    ans++;
                }
            }
        }
    }
}

int main() {
    cin >> N >> M;

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin >> arr[i][j];
        }
    }
    
    Solve();

    cout << ans;
    // 여기에 코드를 작성해주세요.
    return 0;
}