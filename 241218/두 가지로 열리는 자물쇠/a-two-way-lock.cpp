#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;
int N, cnt=0;
int a1, b1, c1; 
int a2, b2, c2; 

bool Check_1(int i, int j, int k){
    if( (abs(i-a1)<=2 || abs( min(i,a1)+N - max(i,a1))<=2)
     && (abs(j-b1)<=2 || abs( min(j,b1)+N - max(j,b1))<=2)
     && (abs(k-c1)<=2 || abs( min(k,c1)+N - max(k,c1))<=2)) {return true;}

     return false;
}

bool Check_2(int i, int j, int k){
    if( (abs(i-a2)<=2 || abs( min(i,a2)+N - max(i,a2))<=2)
     && (abs(j-b2)<=2 || abs( min(j,b2)+N - max(j,b2))<=2)
     && (abs(k-c2)<=2 || abs( min(k,c2)+N - max(k,c2))<=2)) {return true;}

     return false;
}

int main() {
    cin >> N;
    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;

    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            for(int k=1; k<=N; k++){
                if(Check_1(i, j, k) || Check_2(i, j, k)) cnt++;
            }
        }
    }

    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}