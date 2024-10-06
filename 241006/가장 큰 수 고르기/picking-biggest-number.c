#include <stdio.h>

int main() {
    int max=0,arr[10];
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("%d",max);
    // 여기에 코드를 작성해주세요.
    return 0;
}