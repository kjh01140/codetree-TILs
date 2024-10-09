#include <stdio.h>
#include <string.h>
int main() {
    int cnt=0;
    char arr[10][21],a;
    

    for(int i=0;i<10;i++){
        scanf("%s",arr[i]);


    }

    scanf(" %c",&a);

    for(int i=0;i<=10;i++){
        int len=strlen(arr[i]);
        if(a==arr[i][len-1]){
            printf("%s\n",arr[i]);
            cnt++;
        }
    }
    if(cnt==0){


        printf("None");
    }
    // 여기
    // 여기에 코드를 작성해주세요.
    return 0;
}