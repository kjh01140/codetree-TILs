#include <stdio.h>

int main() {
    int n,cnt=2;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%d ",cnt);
            cnt+=2;
            if(cnt==10){
                cnt=2;
            }

        }
        printf("\n");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}