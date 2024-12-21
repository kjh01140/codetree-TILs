#include <iostream>
using namespace std;
int arr[10][20]={};
int cnt = 0;
int main() {
    int  K, N; cin >> K >> N;

    for(int i=1; i<=K; i++){
        for(int j=1; j<=N; j++){
            cin >> arr[i][j];
        }
    }

    for(int i=1; i<=N; i++){ // a
        for(int j=1; j<=N; j++){// b
            if(i==j) continue;

            bool check = true;
            for(int k=1; k<=K; k++){ // 행 기준 먼저 판단
            
                for(int l=1; l<=N; l++){
                    for(int t=1; t<=N; t++){

                        if(arr[k][l] == i && arr[k][t] == j){ 
                            if(l>t){
                                check = false;
                                break;
                            }
                            
                        }

                    }

                }
            }
            if(check) cnt++;
        }
    }

    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}