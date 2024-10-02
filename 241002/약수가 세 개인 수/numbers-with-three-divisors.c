#include <stdio.h>

int main() {
    int start,end,result=0;
    scanf("%d %d",&start,&end);

    for(int i=start;i<=end;i++){ //숫자선정
    int cnt=0;
        for(int j=1;j<i;j++){    //약수 돌림
            if(i%j==0){
                cnt++;
            }      
        }
        if(cnt==3){
            result++;
        }
        
    }

    printf("%d",result);
    // 여기에 코드를 작성해주세요.
    return 0;
}