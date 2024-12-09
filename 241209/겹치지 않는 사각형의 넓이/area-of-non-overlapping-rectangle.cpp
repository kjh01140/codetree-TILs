#include <iostream>
#include <algorithm>
using namespace std;

#define OFFSET 1000
#define MaxC 2001
int main() {
    int Ax1,Ay1,Ax2,Ay2; cin >> Ax1 >> Ay1 >> Ax2 >> Ay2;
    int Bx1,By1,Bx2,By2; cin >> Bx1 >> By1 >> Bx2 >> By2;
    int Mx1,My1,Mx2,My2; cin >> Mx1 >> My1 >> Mx2 >> My2;

    int Cood[MaxC][MaxC]={};

    for(int i=Ax1; i<Ax2; i++){
        for(int j=Ay1; j<Ay2; j++){
            Cood[i+OFFSET][j+OFFSET] = 1;
        } 
    }

    for(int i=Bx1; i<Bx2; i++){
        for(int j=By1; j<By2; j++){
            Cood[i+OFFSET][j+OFFSET] = 1;
        }
    }

    for(int i=Mx1; i<Mx2; i++){
        for(int j=My1; j<My2; j++){
            Cood[i+OFFSET][j+OFFSET] = 2;
        }
    }

    cout << count(&Cood[0][0], &Cood[0][0]+MaxC*MaxC, 1);
    // 여기에 코드를 작성해주세요.
    return 0;
}