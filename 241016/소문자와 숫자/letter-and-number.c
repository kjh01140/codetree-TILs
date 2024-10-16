#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char s[100];
    scanf("%s",s);

    int len= strlen(s);
    for(int i=0;i<len;i++){
        if(isalpha(s[i])){
            printf("%c",tolower(s[i]));
        } else if (isdigit(s[i])){
            printf("%c",s[i]);   //s는 문자열이기 때문에 문자열 안의 숫자는 %c로 출력해야함.%d로 출력시 아스키코드로 출력됨

        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}