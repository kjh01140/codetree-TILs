#include <stdio.h>

int main() {
    while(1){
        int n;
        scanf("%d",&n);
        if(n<25){
            printf("Higher\n");
        }else if(n>25){
            printf("Lower\n");
        } else {
            printf("Good");
            break;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}