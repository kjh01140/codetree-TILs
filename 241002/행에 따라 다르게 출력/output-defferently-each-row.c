#include <stdio.h>

int main() {
    int n,cnt=0;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i%2==0){
                cnt++;
                printf("%d ",cnt);
            } else{
                cnt+=2;
                printf("%d ",cnt);
            }
        }
        printf("\n");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}