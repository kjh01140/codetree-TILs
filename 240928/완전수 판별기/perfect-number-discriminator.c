#include <stdio.h>

int main() {
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            sum+=i;
        }
        
    }
    if(n*2==sum){
            printf("P");
        }else{printf("N");}
    // 여기에 코드를 작성해주세요.
    return 0;
}