#include <stdio.h>
#include <string.h>
int main() {
    char s[20];
    scanf("%s",s);
    int length=strlen(s), cnt1=0,cnt2=0;

    for(int i=0;i<length-1;i++){
        if(s[i]=='e'){
            if(s[i+1]=='e'){
                cnt1++;
            } else if(s[i+1]=='b'){
                cnt2++;
            }
        }
    }    

    printf("%d %d",cnt1,cnt2);
    // 여기에 코드를 작성해주세요.
    return 0;
}