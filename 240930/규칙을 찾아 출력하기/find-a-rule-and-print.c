#include <stdio.h>

int main() {
    int n;
    
    // 입력
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i==0||i==n-1||j==0||j==n-1){
                printf("* ");
            } else if(i>j){
                printf("* ");
            } else{
                printf("  ");

            }
        }
        printf("\n");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}