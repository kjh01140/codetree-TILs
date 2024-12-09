#include <iostream>
#include <algorithm>
using namespace std;

#define OFFSET 1000
#define MaxC 2001
int main() {
    int Ax1,Ay1,Ax2,Ay2; cin >> Ax1 >> Ay1 >> Ax2 >> Ay2;
    int Bx1,By1,Bx2,By2; cin >> Bx1 >> By1 >> Bx2 >> By2;
    

    int Cood[MaxC][MaxC]={};

    for(int i=Ax1; i<Ax2; i++){
        for(int j=Ay1; j<Ay2; j++){
            Cood[i+OFFSET][j+OFFSET] = 1;
        } 
    }

    for(int i=Bx1; i<Bx2; i++){
        for(int j=By1; j<By2; j++){
            Cood[i+OFFSET][j+OFFSET] = 0;
        }
    }

    int min_x = MaxC, max_x = 0;
    int min_y = MaxC, max_y = 0;

    for(int i=0; i<MaxC; i++){
        for(int j=0; j<MaxC; j++){
            if(Cood[i][j]==1){
                if(i < min_x)min_x = i;
                if(i > max_x)max_x = i;
                if(j < min_y)min_y = j;
                if(j > max_y)max_y = j;
            }
        }
    }

    cout << ((max_x+1)-min_x )*((max_y+1)-min_y);

    
    // 여기에 코드를 작성해주세요.
    return 0;
}