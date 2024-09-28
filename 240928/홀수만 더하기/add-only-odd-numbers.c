#include <stdio.h>

int main() {
    int n,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int m;
        scanf("%d",&m);
        if(m%2==1&&m%3==0)
            sum+=m;
    }
    printf("%d",sum);
    // 여기에 코드를 작성해주세요.
    return 0;
}