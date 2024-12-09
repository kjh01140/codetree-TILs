#include <iostream>
#include <algorithm>
using namespace std;

#define OFFSET 100

int main() {
    int N;
    cin >> N;
    int Cood[201][201]={};

    for(int i=0; i<N; i++){
        int  x1, y1, x2, y2;
        cin >> x1 >> y1;
        cin >> x2 >> y2;
        for(int j=x1; j<=x2-1; j++ ){
            for(int k=y1; k<=y2-1; k++){
                Cood[j+OFFSET][k+OFFSET] = 1;
            }
        }
    }
    cout << count(&Cood[0][0], &Cood[0][0]+201*201, 1 );
    // 여기에 코드를 작성해주세요.
    return 0;
}