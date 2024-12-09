#include <iostream>
#include <algorithm>
using namespace std;

#define OFFSET 100
#define MaxC 201
int main() {

    int Cood[MaxC][MaxC]={};
    int N; cin >>N;

    for(int k=0; k<N; k++){
        int x,y;
        cin >> x >>y;
        for(int i=x; i<x+8; i++){
            for(int j=y; j<y+8; j++){
            Cood[i+OFFSET][j+OFFSET] = 1;
            } 
        }
    }



    

    

    cout << count(&Cood[0][0], &Cood[0][0]+MaxC*MaxC, 1);
    // 여기에 코드를 작성해주세요.
    return 0;
}