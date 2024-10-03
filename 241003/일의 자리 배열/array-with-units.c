#include <stdio.h>

int main() {
    int arr[11],a,b;

    scanf("%d %d",&a,&b);
    arr[0]=a;
    arr[1]=b;

    for(int i=2;i<10;i++){
        arr[i]=(arr[i-1]+arr[i-2])%10;
    }
    for(int j=0;j<10;j++){
        printf("%d ",arr[j]);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}