#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d ",i%2==0||i%3==0?1:0);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}