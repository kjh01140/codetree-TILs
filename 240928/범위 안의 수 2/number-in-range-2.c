#include <stdio.h>

int main() {
    int sum=0,cnt=0;
    for(int i=0;i<10;i++){
        int n;
        scanf("%d",&n);
        if(n>=0&&n<=200){
            cnt++;
            sum+=n;
        }
    }
    printf("%d %.1lf",sum,(double)sum/cnt);
    // 여기에 코드를 작성해주세요.
    return 0;
}