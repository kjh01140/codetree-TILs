#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<2*n+1;i++){
        for(int j=0;j<2*n+1;j++){
            if(i%2==0||j%2==0){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}