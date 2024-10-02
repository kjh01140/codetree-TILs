#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d * %d = %d",i+1,j+1,(i+1)*(j+1));
            if(j<n-1){
                printf(", ");
            }
        }
        printf("\n");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}