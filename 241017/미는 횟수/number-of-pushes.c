#include <stdio.h>
#include <string.h>

int main() {
    char s1[101],s2[101];
    scanf("%s",s1);
    scanf("%s",s2);
    int cnt=0, len=strlen(s1);
    
    
    for(;;){
        char temp= s2[len-1];
        cnt++;
        for(int i=len-1;i>0;i-- ){
        s2[i]=s2[i-1];
        }

        s2[0]=temp;
        if(strcmp(s1,s2)==0)break;

        if(cnt>len) {
            cnt=-1;
            break;}
    }
    printf("%d",cnt);
    // 여기에 코드를 작성해주세요.
    return 0;
}