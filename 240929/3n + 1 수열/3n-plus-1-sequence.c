#include <stdio.h>

int main() {
    int N,cnt=0;
    scanf("%d",&N);
    for(;;){
        if(N%2==0){
            N/=2;
            cnt++;
        } else{
            N=N*3+1;
            cnt++;
        }
        if(N==1){
            printf("%d",cnt);
            break;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}