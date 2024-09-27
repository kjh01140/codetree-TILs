#include <stdio.h>

int main() {
    int cnt=0,pnt=0,n;
    for(int i=0;i<10;i++){
        scanf("%d",&n);
        if(n%3==0){
            cnt++;
        }
        if(n%5==0){
            pnt++;
        }
    }
    printf("%d %d",cnt,pnt);
    // 여기에 코드를 작성해주세요.
    return 0;
}