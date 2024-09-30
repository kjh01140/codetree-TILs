#include <stdio.h>

int main() {
    int n;
    
    // 입력
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i==0||i==n||j==0||j==n){
                printf("* ");
            } else if(i>=j){
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