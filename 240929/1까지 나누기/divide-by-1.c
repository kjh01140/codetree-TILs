#include <stdio.h>

int main() {
    int n,cnt=0,prod=1;
    scanf("%d",&n);
    for(int i=1;i<=5000;i++){
        prod=n/i;
        n=prod;
        cnt++;
        if(prod<=1){
            printf("%d",cnt);
            break;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}