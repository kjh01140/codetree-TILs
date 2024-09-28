#include <stdio.h>

int main() {
    int n,cnt=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%4==0)
        cnt++;
        if(i%100==0 && i%400!=0)
        cnt--;

    }
    printf("%d",cnt);
    // 여기에 코드를 작성해주세요.
    return 0;
}