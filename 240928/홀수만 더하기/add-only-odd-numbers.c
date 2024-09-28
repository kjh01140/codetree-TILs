#include <stdio.h>

int main() {
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        if(i%2==1&&n%3==0)
            sum+=i;
    }
    printf("%d",n);
    // 여기에 코드를 작성해주세요.
    return 0;
}