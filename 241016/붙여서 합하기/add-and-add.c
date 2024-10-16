#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    char s1[1000],s2[1000],temp[1000]="";
    scanf("%s",s1);
    scanf("%s",s2);
    
    
    
    strcat(temp,s1);
   

    printf("%d",atoi(strcat(s1,s2))+atoi(strcat(s2,temp)));
    // 여기에 코드를 작성해주세요.
    return 0;
}