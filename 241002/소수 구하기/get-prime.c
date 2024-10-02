#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){//소수 선정
        int check=0;

        for(int j=1;j<i;j++){ //약수선정
            if(i%j==0){
                check++;
            }
        }

        if(check==1){
            printf("%d ",i);
        }


       
       
    }
    

    // 여기에 코드를 작성해주세요.
    return 0;
}