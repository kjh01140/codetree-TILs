#include <iostream>
using namespace std;
int X, Y; 
int cnt = 0;
int Nums[10] = {}; //{0, 1, 2, 3, 4, 5, 6, 7, 8, 9}


bool Func(int N){

    int Nums[10] = {0,}; //{0, 1, 2, 3, 4, 5, 6, 7, 8, 9}

    while(true){
        if(N<10){
            Nums[N]++;
            break;
        }
        Nums[N%10]++;
        N/=10;   
    }
    int n=0;
    for(int i=0; i<10; i++){
        
        if(Nums[i] != 0) n++;
    }
    if(n != 2) return false;


    for(int i=0; i<10; i++){ // 서로다른 
        for(int j= i+1; j<10; j++){
            
            if( Nums[i] != 0 && Nums[j] != 0 ){
                if((Nums[i] == 1 && Nums[j] != 1) || (Nums[i] != 1 && Nums[j] == 1))return true;
                
            }
        }
    }
    return false;
}
int main() {
    cin >> X >> Y;
    for(int i=X; i<=Y; i++){
        if(Func(i)) cnt++;
    }
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}