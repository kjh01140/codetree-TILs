#include <stdio.h>

int main() {
    int a1,a2;
    scanf("%d %d",&a1,&a2);
    int arr[100]={a1,a2};

    for(int i=0;i<8;i++){
        arr[i+2]=arr[i+1]+2*arr[i];
    }
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}