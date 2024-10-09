#include <stdio.h>

int main() {
    char str[10];
    scanf("%s",str);

    for(int i=0; str[i]!='\0';i++){
        printf("%c\n",str[i]);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}