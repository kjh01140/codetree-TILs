#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if(a<b){
        for(int i=b;i>=a;i--){
        printf("%d ",i);
        }
    } else{
        for(int i=a;i>=b;i--){
        printf("%d ",i);
        }

    }
    // 여기에 코드를 작성해주세요.
    return 0;
}