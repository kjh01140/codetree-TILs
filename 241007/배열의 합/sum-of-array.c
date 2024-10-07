#include <stdio.h>

int main() {

    int arr[4];
    int sum=0;
    for(int i=0;i<4;i++){
        sum=0;
        for(int j=0;j<4;j++){
            
            scanf("%d",&arr[j]);
            sum+=arr[j];
            
        }
        printf("%d\n",sum);
    }


    // 여기에 코드를 작성해주세요.
    return 0;
}