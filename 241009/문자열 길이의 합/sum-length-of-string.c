#include <stdio.h>
#include <string.h>
int main() {
    int n,len_all=0,cnt=0;
    scanf("%d",&n);
    char arr[n][101];

    for(int i=0;i<n;i++){
        scanf("%s",arr[i]);
    }
    for(int i=0;i<n;i++){
        int len=strlen(arr[i]);
        len_all+=len;
        if(arr[i][0]=='a'){
            cnt++;
        }
    }

    printf("%d %d",len_all,cnt);
    // 여기에 코드를 작성해주세요.
    return 0;
}