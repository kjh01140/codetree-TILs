#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j%2!=0){
                printf("%d",i);
            } else{
                printf("%d",n+1-i);
            }
        }
        printf("\n");
        
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}