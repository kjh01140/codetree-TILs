#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    scanf("%s",s);
    int len = strlen(s);

    for(int i=1;i<len-1;i++){
        s[i]=s[i+1];
    }

    int len2 = strlen(s);

    for(int i=len2-3;i<len2-1;i++){
        s[i]=s[i+1];
    }
    s[len2-2]='\0';
    printf("%s",s);
    // 여기에 코드를 작성해주세요.
    return 0;
}