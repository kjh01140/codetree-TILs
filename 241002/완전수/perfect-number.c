#include <stdio.h>

int main() {
    int start,end,cnt=0,sum=0;
    scanf("%d %d",&start,&end);

    for(int i=start;i<=end;i++){ //숫자선정
        for(int j=1;j<i;j++){    //약수 돌림
            if(i%j==0){
                sum+=j;
                }

            if(sum==i){
                cnt++;
                sum=0;
            }
        }
    }

    printf("%d",cnt);
    // 여기에 코드를 작성해주세요.
    return 0;
}