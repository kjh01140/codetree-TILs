#include <iostream>
using namespace std;
char arr[16][16] = {};

int cnt = 0;

int main() {
    int R, C; cin >> R >> C;

    int x=0, y=0; //좌상단

    for(int i=0; i<R; i++){ // 색칠
        for(int j=0; j<C ;j++ ){
            cin >> arr[i][j];    
        }
    }


    char color = arr[0][0];  // 좌상단 색깔
    if(color == arr[R-1][C-1]){ cout << 0; return 0;}
    
    for(int i=x+1; i<R-1; i++){
        for(int j=y+1; j<C-1; j++){
            if(arr[i][j] != color ){
                x = i; 
                y = j;
                color = arr[i][j];

                for(int k=x+1; k<R-1; k++){
                    for(int l=y+1; l<C-1; l++){
                        if(arr[k][l] != color ) cnt++;
                    }
                }

            }
        }
    }
    cout << cnt;




    // 여기에 코드를 작성해주세요.
    return 0;
}