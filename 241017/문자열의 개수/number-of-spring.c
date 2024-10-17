#include <stdio.h>
#include <string.h>
int main() {
    int cnt=0;
    char t[201][201];

    for(int i=0;;i++){
        char s[201];
        scanf("%s",s);

        if(strcmp(s,"0")==0) break;

        strcpy(t[cnt],s);
        cnt++;        
    }

    printf("%d\n",cnt);
    for(int i=0;i<cnt;i+=2){
        printf("%s\n",t[i]);

    }

    
    // 여기에 코드를 작성해주세요.
    return 0;
}