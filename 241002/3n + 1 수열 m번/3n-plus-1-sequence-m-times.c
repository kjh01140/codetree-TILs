#include <stdio.h>

int main() {
    int n,m,cnt=0;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        for(;;){
            scanf("%d",&m);

            if(m%2==0){
            m/=2;
            cnt++;
            } else{
            m=m*3+1;
            cnt++;
            }
            if(m==1){
                break;
            }
        }
    printf("%d\n",cnt);
    cnt=0;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}