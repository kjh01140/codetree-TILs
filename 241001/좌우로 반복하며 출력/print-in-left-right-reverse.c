#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        if(i%2!=0){
            for(int j=1;j<=n;j++){
                printf("%d",j);
            }
        } else{
            for(int j=n;j>=1;j--){
                 printf("%d",j);
            }
        }
        printf("\n");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}