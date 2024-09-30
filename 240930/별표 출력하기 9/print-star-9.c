#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=n-2-i;j>=0;j--){
            printf("  ");
        }
        for(int j=1;j<=2*i+1;j++){
            printf("* ");
        }
        printf("\n");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}