#include <stdio.h>

int main() {
    int n,cnt=9;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%d",cnt);
            cnt--;
            if(cnt==0){
                cnt=9;
            }

        }
        printf("\n");
    }
    
    // 여기에 코드를 작성해주세요.
    return 0;
}