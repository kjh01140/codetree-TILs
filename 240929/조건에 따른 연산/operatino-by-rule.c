#include <stdio.h>

int main() {
    int n,cnt=0;
    scanf("%d",&n);
    while(1){
        if(n%2==0){
            n=n*3+1;
            cnt++;
        }else{
            n=n*2+2;
            cnt++;
        }
        if(n>=1000){
            printf("%d",cnt);
            break;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}