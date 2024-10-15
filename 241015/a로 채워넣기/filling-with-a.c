#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    scanf("%s",s);
    int len=strlen(s);

    s[1]='a';
    s[len-2]='a';
    printf("%s",s);
    
    // 여기에 코드를 작성해주세요.
    return 0;
}