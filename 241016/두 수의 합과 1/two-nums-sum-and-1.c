#include <stdio.h>
#include <string.h>

int main() {
    int a,b,cnt=0;
    char str[10];
    scanf("%d %d",&a,&b);
    sprintf(str,"%d",a+b);
    for(int i=0;i<strlen(str);i++){
        if(str[i]=='1') cnt++;
    }
    printf("%d",cnt);

    // 여기에 코드를 작성해주세요.
    return 0;
}