#include <stdio.h>

int main() {
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=100;i++){
        sum+=i;
        if(sum>=n){
            printf("%d",i);
            break;
        }

    }
    // 여기에 코드를 작성해주세요.
    return 0;
}