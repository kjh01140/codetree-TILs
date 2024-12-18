#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;
int arr[6];
int sum = 0;  // 인수들의 총합
int ans = 0;

int main() {
    for(int i=0; i<6; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){// 첫번째 짝 선정
            if(i!=j){

                for(int k=0; k<6; k++){
                    for(int l=0; l<6; l++){
                        if(k!=i && k!=j && l!=i && l!=j && k!=l){

                            int sum1 = arr[i] + arr[j];
                            int sum2 = arr[k] + arr[l];
                            int sum3 = sum - sum1 - sum2;

                            ans = min(abs(sum1-sum2), abs(sum1-sum3));
                            ans = min(ans, abs(sum2-sum3));

                        }


                    }
                }

            }
        }
    }
    cout << ans;
    return 0;
}