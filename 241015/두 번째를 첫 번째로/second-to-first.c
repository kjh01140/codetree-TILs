#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    scanf("%s",str);
    int len=strlen(str);

    char first=str[0],second=str[1];

    for(int i=0;i<len;i++){
        if (str[i]==second){
            str[i]=first;
        }
    }

    printf("%s",str);
    // 여기에 코드를 작성해주세요.
    return 0;
}