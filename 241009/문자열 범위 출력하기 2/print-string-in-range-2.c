#include <stdio.h>
#include <string.h>

int main() {
    char arr[100];
    int n,cnt=0;
    scanf("%s",arr);
    scanf("%d",&n);

    int len=strlen(arr);

    for(int i= len-1 ; cnt<11; i--){
        printf("%c",arr[i]);
        cnt++;
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}