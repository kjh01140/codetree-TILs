#include <iostream>
#include <string>
using namespace std;


int dir_num = 3; // 초기 방향 북
int x = 0; // 초기 위치
int y = 0;

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

bool check = false; // 도착여부


void Move(int &x, int &y, char dir){ //
    if(dir == 'L'){
        dir_num = (dir_num+3)%4;
    } else if(dir == 'R'){
        dir_num = (dir_num+1)%4;
    } else if(dir == 'F'){

        int nx = x + dx[dir_num];
        int ny = y + dy[dir_num];
        

        if(nx == 0 && ny == 0){
            check = true;
        }

        x = nx;
        y = ny;
        
        
    }
}

int main() {
    

    string N; cin >> N;
    int N_len = N.length();
    /*for(int i=1; i<=N_len; i++){
        cout << N[i-1] << " ";
    }*/ //디버깅

    for(int i=1; i<=N_len; i++){ //i는 곧 시간
        Move(x, y, N[i-1]);

        if(check){
            cout << i;
            return 0;
        }

    }
    cout << -1;


    return 0;
}