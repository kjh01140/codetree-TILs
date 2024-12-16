#include <iostream>
#include <algorithm>
using namespace std;
int arr[20][20];
int N;
int max_sum = 0;

bool InRange(int x, int y){
    return( 0 <= x && x < N && 0<=y && y+2<N );
}

void Func(){
    int sum = 0;
    for(int i=0; i<N; i++){
        for(int j=0; j+2<N; j++){

            if(InRange(i, j)){ // 첫번째 직사각형이 격자 안에 있을때
                    
                    for(int k=j+3; k+2<N; k++){
                        if(InRange(i,k)){
                            sum = arr[i][j] + arr[i][j+1] + arr[i][j+2]+ arr[i][k] + arr[i][k+1] + arr[i][k+2];
                            max_sum = max( max_sum, sum );
                        }
                        
                    }
                
                


                for(int k= i+1; k<N; k++){
                    for(int l=0; l+2<N; l++){
                        if(InRange(k, l)){
                            sum = arr[i][j] + arr[i][j+1] + arr[i][j+2] +arr[k][l] + arr[k][l+1] + arr[k][l+2];
                            max_sum = max( max_sum, sum );
                        }
                    }
                }

                
            }
        }
    }
}



int main() {
    cin >> N;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> arr[i][j];
        }
    }
    Func();

    cout << max_sum;


    // 여기에 코드를 작성해주세요.
    return 0;
}