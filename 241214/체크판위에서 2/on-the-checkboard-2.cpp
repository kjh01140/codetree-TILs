#include <iostream>
using namespace std;
char arr[16][16] = {};

int cnt = 0;

int main() {
    int R, C; cin >> R >> C;

    for(int i=0; i<R; i++) {
        for(int j=0; j<C; j++) {
            cin >> arr[i][j];
        }
    }

    char start_color = arr[0][0];
    char end_color = arr[R-1][C-1];
    if (start_color == end_color) {
        cout << 0;
        return 0;
    }

    // 첫 번째 점프
    for (int i = 1; i < R-1; i++) {
        for (int j = 1; j < C-1; j++) {
            if (arr[i][j] != start_color) {
                // 두 번째 점프
                for (int k = i + 1; k < R; k++) {
                    for (int l = j + 1; l < C; l++) {
                        if (arr[k][l] != arr[i][j]){
                            for( int q = k+1; q<R; q++){
                                for(int w = l+1; w<C; w++){
                                    if(q==R-1 && w == C-1) cnt ++;
                                }
                            }

                        }

                        
                    }
                }
            }
        }
    }

    cout << cnt;
    return 0;
}
