#include <stdio.h>
#include <string.h>
int main() {
    
    for(;;){
        char s[100];
        scanf("%s",s);

        if(strcmp(s,"END")==0) break;

        int len = strlen(s);
        for(int i=len-1;i>=0;i--){
            printf("%c",s[i]);
        }
        printf("\n");

    }
    // 여기에 코드를 작성해주세요.
    return 0;
}