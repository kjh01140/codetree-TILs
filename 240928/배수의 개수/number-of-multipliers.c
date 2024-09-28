#include <stdio.h>

int main() {
    int cnt1=0,cnt2=0;
    for(int i=0;i<10;i++){
        int n;
        scanf("%d",&n);
        if(n%3==0)
            cnt1++;
        if(n%5==0)
            cnt2++;
    }
    printf("%d %d",cnt1,cnt2);
    // 여기에 코드를 작성해주세요.
    return 0;
}