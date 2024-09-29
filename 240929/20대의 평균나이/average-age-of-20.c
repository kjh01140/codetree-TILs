#include <stdio.h>

int main() {
    int n,cnt=0,sum=0;

    for(;;){
        
        scanf("%d",&n);
        if(n>=20&&n<30){
            sum+=n;
            cnt++;
        } else{
            break;}
        
    }
    printf("%.2lf",(double)sum/cnt);
    // 여기에 코드를 작성해주세요.
    return 0;
}