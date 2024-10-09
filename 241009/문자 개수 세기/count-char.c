#include <stdio.h>
#include <string.h>

int main() {
    int cnt=0;
    char str[101], a;
    fgets(str,100,stdin);

    scanf("%c",&a);


    for(int i=0; i<strlen(str);i++){
        if(a==str[i]){
            cnt++;
        }
    }
    printf("%d",cnt);
    // 여기에 코드를 작성해주세요.
    return 0;
}