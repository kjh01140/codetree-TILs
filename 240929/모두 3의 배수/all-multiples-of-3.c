#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    bool s=true;

    for(int i=0;i<5;i++){
        scanf("%d",&n);
        if(n%3!=0){
            s=false;
            break;
        }
    }
    printf("%d",s);

    // 여기에 코드를 작성해주세요.
    return 0;
}