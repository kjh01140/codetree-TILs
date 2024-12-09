#include <iostream>
#include <algorithm>
using namespace std;

#define OFFSET 100
#define MaxC 201

int main() {
    int n; cin >> n;
    int Cood[MaxC][MaxC] = {};
    int cnt=0;

    int color[2] = {1,2}; // Red, Blue

    for(int i=0; i<n; i++){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for(int j=x1; j<x2; j++ ){
            for(int k=y1; k<y2; k++){
                Cood[j+OFFSET][k+OFFSET]=color[cnt%2];
                 
            }
        }
        cnt++;

    }

    cout << count(&Cood[0][0], &Cood[0][0]+MaxC*MaxC, 2);
    // 여기에 코드를 작성해주세요.
    return 0;
}