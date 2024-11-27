#include <iostream>
using namespace std;
int x=0,y=0;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1}; 

void Func(char dir, int dis){
    if(dir=='E'){
        x+=dx[0]*dis;
    } else if (dir=='S'){
        y+=dy[1]*dis;
    }else if (dir=='W'){
        x+=dx[2]*dis;
    }else if (dir=='N'){
        y+=dy[3]*dis;
    }
}
int main() {
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        char dir;
        int dis;
        cin >> dir >> dis;
        Func(dir,dis);
    }
    cout << x << " " << y ;
    // 여기에 코드를 작성해주세요.
    return 0;
}