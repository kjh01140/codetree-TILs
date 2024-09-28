#include <stdio.h>

int main() {
    int n,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int m;
        scanf("%d",&m);
        sum+=m;
    }
    printf("%d %.1lf",sum,(double)sum/n);
    // 여기에 코드를 작성해주세요.
    return 0;
}