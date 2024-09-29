#include <stdio.h>

int main() {
    while(1){
        int m,n;
        char c;
        scanf("%d %d %c",&n,&m,&c);
        if(c=='C'){
            printf("%d",n*m);
            break;
        }
        printf("%d\n",n*m);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}