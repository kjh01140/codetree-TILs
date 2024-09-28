#include <stdio.h>

int main() {
    int cnt=0;
    for(int i=0;i<5;i++){
        int n;
        scanf("%d",&n);
        if(n%2==0)
            cnt++;
    }
    printf("%d",cnt);
    // 여기에 코드를 작성해주세요.
    return 0;
}