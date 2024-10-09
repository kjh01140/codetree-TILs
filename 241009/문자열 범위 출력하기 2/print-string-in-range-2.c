#include <stdio.h>
#include <string.h>

int main() {
    char arr[101];
    int n;
    scanf("%s",arr);
    scanf("%d",&n);

    int len=strlen(arr);

    for(int i= len-1 ; i>=len-n; i--){
        if(arr[i]=='\0') break;
        printf("%c",arr[i]);
       
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}