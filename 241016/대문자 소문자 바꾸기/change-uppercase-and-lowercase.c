#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[20];
    scanf("%s",s);
    int len = strlen(s);

    for(int i=0;i<len;i++){
        if(isupper(s[i])){
            s[i]=tolower(s[i]);
        }else if (islower(s[i])){
            s[i]=toupper(s[i]);
        }
    }
    printf("%s",s);
    // 여기에 코드를 작성해주세요.
    return 0;
}