#include <stdio.h>
#include <stdbool.h>
int main() {
    int a,b,c;
    bool s=true;
    scanf("%d %d %c",&a,&b,&c);
    for(int i=a; i<=b;i++){
        if (i%c==0){
            s=false;
        }
    }
    printf(s?"YES":"NO");
    // 여기에 코드를 작성해주세요.
    return 0;
}