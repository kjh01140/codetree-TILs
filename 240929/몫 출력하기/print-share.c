#include <stdio.h>

int main() {
    int cnt=0;
    for(;;){
        int n;
        scanf("%d",&n);
        
        if(n%2==1){
            continue;
        } else{
            printf("%d\n",n/2);
            cnt++;
        }
        if(cnt==3)
            break;

    }
    // 여기에 코드를 작성해주세요.
    return 0;
}