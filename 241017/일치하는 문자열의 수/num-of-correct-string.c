#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    int n,cnt=0;
    scanf("%d %s",&n,s);

    for(int i=0;i<n;i++){
        char ss[100];
        scanf("%s",ss);
        if(strcmp(s,ss)==0) cnt++;
    }
    printf("%d",cnt);
    // 여기에 코드를 작성해주세요.
    return 0;
}