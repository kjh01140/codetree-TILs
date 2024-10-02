#include <stdio.h>

int main() {
    int m,n;
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        int cnt=0;
        scanf("%d",&n);
        for(;;){
            
            if(n==1){
                printf("%d\n",cnt);
                break;
            }

            if(n%2==0){
            n/=2;
            cnt++;
            } else{
            n=n*3+1;
            cnt++;
            }
            
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}