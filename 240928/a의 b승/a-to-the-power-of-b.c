#include <stdio.h>

int main() {
    int a,b,prod=1;
    scanf("%d %d",&a,&b);

    for(int i=1;i<=b;i++){
        prod*=a;
    }
    printf("%d",prod);
    // 여기에 코드를 작성해주세요.
    return 0;
}