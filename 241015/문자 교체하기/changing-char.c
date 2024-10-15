#include <stdio.h>

int main() {
    char str1[20],str2[20];
    scanf("%s",str1);
    scanf("%s",str2);
    str2[0]=str1[0];
    str2[1]=str1[1];
    printf("%s",str2);

    // 여기에 코드를 작성해주세요.
    return 0;
}