#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char s[100];
    scanf("%s",s);

    int len= strlen(s),cnt=0;
    for(int i=0;i<len;i++){
        if(isdigit(s[i])){
            cnt+=s[i]-'0';
        }
    }
    printf("%d",cnt);
    // 여기에 코드를 작성해주세요.
    return 0;
}