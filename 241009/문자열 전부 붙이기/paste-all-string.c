#include <stdio.h>
#include <string.h>
int main() {
    int n;
    scanf("%d",&n);

    char arr[1000];
    scanf("%s",arr);

    for(int i=1;i<n;i++){
        char n_arr[100];
        scanf("%s",n_arr);
        strcat(arr,n_arr);

    }
    printf("%s",arr);
    // 여기에 코드를 작성해주세요.
    return 0;
}