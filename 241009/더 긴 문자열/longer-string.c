#include <stdio.h>  
#include <string.h>

int main() {
    char str1[100],str2[100];

    scanf("%s",str1);
    scanf("%s",str2);
    //printf("%s %d", strlen(str1)>strlen(str2) ? str1,strlen(str1):str2,strlen(str2));
    if( strlen(str1)>strlen(str2)){
        printf("%s %d",str1,strlen(str1));
    } else if(strlen(str1)<strlen(str2)){
        printf("%s %d",str2,strlen(str2));
    } else{
        printf("same");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}