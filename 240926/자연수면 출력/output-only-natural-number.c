#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>0){
        for(int i=0;i<b;i++){
            printf("%d",a);
        }
        
    } else{

        printf("%d",0);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}