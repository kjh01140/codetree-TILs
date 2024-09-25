#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&b,&a);
    while(b>=a){
        printf("%d ",b);
        b-=2;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}