#include <stdio.h>

int main() {
    int a,n;
    scanf("%d %d",&a,&n);
    for(int i=0;i<n;i++){
        printf("%d \n",a+n);
        a+=n;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}