#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    scanf("%s",&s);
    int len= strlen(s);

    for(int i=0;i<len;i++){
        if (s[i]=='e'){
            for(int j=i;j<len-1;j++){
                s[j]=s[j+1];
            }

        }
        
    }
    len--;
    s[len]='\0';

    printf("%s",s); 
    // 여기에 코드를 작성해주세요.
    return 0;
}