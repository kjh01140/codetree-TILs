#include <stdio.h>

int main() {
    int arr[10],sum1=0,sum2=0;
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);

        if(i%2==1){
            sum1+=arr[i];
        }
        if((i+1)%3==0){
            sum2+=arr[i];
        }
    }
    printf("%d %.1lf",sum1,(double)sum2/3);
    // 여기에 코드를 작성해주세요.
    return 0;
}