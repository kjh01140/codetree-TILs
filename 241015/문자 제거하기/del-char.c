#include <stdio.h>
#include <string.h>
int main() {
    char s[20];
    scanf("%s",s);
    int len = strlen(s);

    for(;;){
        int n;
        scanf("%d",&n);

        if(n>=len){
            s[len-1]='\0';
            len--;
        } else{
            for(int i=n;i<len-1;i++){
                s[i]=s[i+1];
            }    
            s[len-1]='\0';
            len--;
            
        }
        printf("%s\n",s);
        if(len==1) break;

    }
    // 여기에 코드를 작성해주세요.
    return 0;
}