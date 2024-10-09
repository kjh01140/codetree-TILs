#include <stdio.h>

int main() {
    char str[100];

    fgets(str,100,stdin);
    
    for(int i=2;i<10;i++){
        printf("%c",str[i]);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}