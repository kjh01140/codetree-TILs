#include <stdio.h>
#include <string.h>
int main() {
    int n,sum=0;
    scanf("%d",&n);
    char str[100];
    sprintf(str,"%d",n);
    //printf("%s\n",str);
    for(int i=0;i<strlen(str);i++){
        sum+=(str[i]-'0');
        

    }
    printf("%d",sum);
    // 여기에 코드를 작성해주세요.
    return 0;
}