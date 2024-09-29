#include <stdio.h>
#include <stdbool.h>

int main() {
    int a,b;
    bool s=false;

    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
        if(1920%i==0&&2880%i==0)
            s=true;

    }
    printf("%d",s);
    // 여기에 코드를 작성해주세요.
    return 0;
}