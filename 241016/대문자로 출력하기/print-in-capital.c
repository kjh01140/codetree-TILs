#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char s[100];
    scanf("%s",s);

    int len= strlen(s);
    for(int i=0;i<len;i++){
        if(isalpha(s[i])){
            printf("%c",toupper(s[i]));
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}