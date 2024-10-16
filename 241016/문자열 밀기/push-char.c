#include <stdio.h>
#include <string.h>
int main() {
    char s[20];
    scanf("%s",s);
    int len = strlen(s);
    char temp = s[0];

    for(int i= 0; i<len-1; i++){
        s[i]=s[i+1];
    }
    s[len-1]=temp;

    printf("%s",s);
    // 여기에 코드를 작성해주세요.
    return 0;
}