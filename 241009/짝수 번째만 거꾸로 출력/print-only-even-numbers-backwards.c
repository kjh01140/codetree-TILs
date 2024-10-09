#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    scanf("%s",str);
    int len = strlen(str);
    
    for(int i= len-1; i>=0; i--){
        if(i%2==1){
            printf("%c",str[i]);
        }
    }
    
    // 여기에 코드를 작성해주세요.
    return 0;
}