#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d ",a);
   do{
        if(a%2==1){
            a*=2;
        } else{
            a+=3;
        }
        printf("%d ",a);
        
    }while(a<b);
    // 여기에 코드를 작성해주세요.
    return 0;
}