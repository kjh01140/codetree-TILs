#include <iostream>
#include <string>
using namespace std;

int dx[4]={1,0,-1,0};
int dy[4]={0,-1,0,1};
int dir_num = 3;
int nx = 0, ny = 0;

void Move(char dir){
    if(dir=='L'){ // 좌회전
        dir_num  = (dir_num+3)%4;
       

    } else if (dir=='R'){ // 우회전
        dir_num  = (dir_num+1)%4;
        
    } else{ // 직진
        nx += dx[dir_num];
        ny += dy[dir_num];

    }
}


int main() {
    string order;
    cin >> order;

    int order_count = order.length();

    for(int i=0; i<order_count; i++){
        char dir; 
        dir = order[i];
        Move(dir);
    }

    cout << nx << " " << ny;
    // 여기에 코드를 작성해주세요.
    return 0;
}