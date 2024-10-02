#include <stdio.h>

int main() {
    int start,end,cnt=0;
    scanf("%d %d",&start,&end);

    for(int i=start;i<=end;i++){ //숫자선정
        int sum=0;//sum이 여기 있어야 하는 이유는 만약 cnt++가 안되는 경우라도 sum을 초기화 시켜야함.

        for(int j=1;j<i;j++){    //약수 돌림
            if(i%j==0){
                sum+=j;
            }      
        }
            
        if(sum==i){     //if문이 약수합을 구하는 for문에 들어가면 안되는 이유는 
                        //for문이 끝나야 최종 sum값이 나오기 때문이다.
            cnt++;
                
        }
        
    }

    printf("%d",cnt);
    // 여기에 코드를 작성해주세요.
    return 0;
}