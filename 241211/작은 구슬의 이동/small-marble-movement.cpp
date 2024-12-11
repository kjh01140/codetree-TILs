#include <iostream>
using namespace std;    //0 인덱스로 짜고 입력과 출력에 주의

int arr[51][51]={};
int dx[4] = {0,1,-1,0};
int dy[4] = {1,0,0,-1}; //문제에 유용한 배열로 선정!

int GetDir(char d){
    if(d == 'U'){
        return 2;
    } else if (d == 'D'){
        return 1;
    } else if (d == 'R'){
        return 0;
    } else{
        return 3;
    }
}

bool InRange(int r, int c, int n){
    return (1<=r && r<=n && 1<=c && c<=n); //모서리 판단
}

void MoveOrTurn(int &r, int &c, int &dir, int n){
    int nr = r + dx[dir];
    int nc = c + dy[dir];

    if(!InRange(nr,nc,n)){
        dir = 3- dir;

    } else{
        r = nr;
        c = nc;
    }
}

int main() {
    int n, t;    cin >> n >> t;  // 격자, 시간
    int r,c; char d;     cin >> r >> c >> d;//행,열,방향 // 1인덱스로 입력
    int dir = GetDir(d); // 방향 숫자로 변환
    
    while(t--){
        MoveOrTurn(r,c,dir,n);
    }

    cout << r << " " << c;


    // 여기에 코드를 작성해주세요.
    return 0;
}