#include <stdio.h>

int main() {
    int a,b,sum=0;
    int cnt_i=0;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
        
        if(i%5==0||i%7==0){
            sum+=i;
            cnt_i++;}
    }
    printf("%d %.1lf",sum,(double)sum/cnt_i);
    // 여기에 코드를 작성해주세요.
    return 0;
}