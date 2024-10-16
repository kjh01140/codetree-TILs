#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main() {
    char s1[9],s2[9],t1[9]="",t2[9]="";
    scanf("%s",s1);
    scanf("%s",s2);
    int len1=strlen(s1);
    int len2=strlen(s2);    

    for(int i=0;i<len1;i++){
        
        if(isdigit(s1[i])){
            t1[i]=s1[i];
        } else{
            
            break;
        }
    }
    for(int i=0;i<len2;i++){
        
        if(isdigit(s2[i])){
            t2[i]=s2[i];
        } else{
            
            break;
        }
    }

    printf("%d",atoi(t1)+atoi(t2));
    // 여기에 코드를 작성해주세요.
    return 0;
}