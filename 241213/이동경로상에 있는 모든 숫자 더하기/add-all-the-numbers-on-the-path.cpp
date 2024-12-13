#include <iostream>
using namespace std;
int N; // N*N격자
int T; // 명령수
int x = 0, y = 0;
int dir = 3; // 초기 방향 북쪽
int cnt = 0; // 총합

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

int arr[100][100] = {};

bool InRange(int x, int y){
    return 0<=x && x<N && 0<=y && y<N;
}

void Move(int &x, int &y, char dir_input){
    
    if(dir_input == 'F'){
        
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if(InRange(nx, ny)){
            x = nx;
            y = ny;
            cnt+= arr[x][y];
            arr[x][y] = 0;    // 값을 한 번만 합산하도록 초기화
        }

    } else if (dir_input == 'L'){
        dir = (dir+3)%4;
    } else if (dir_input == 'R'){
        dir = (dir+1)%4;
    }

    


}
int main() {
    cin >> N >> T;
    

    x = (N-1)/2;     y = (N-1)/2; 
    

    string string_T;
    cin >> string_T;


    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> arr[i][j];
        }
    }
    
    cnt += arr[x][y];

    for(int i=0; i<T; i++){
        Move( x, y, string_T[i] ); 
    }
    
    cout << cnt;    




    // 여기에 코드를 작성해주세요.
    return 0;
}