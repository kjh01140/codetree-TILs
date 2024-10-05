#include <stdio.h>

int main() {
    int n,cnt=0;
    scanf("%d",&n);
    int arr[100];

    for(int i=0;cnt<2;i++){
        arr[i]=n*(i+1);
        if(arr[i]%5==0){
            cnt++;
        }

        printf("%d ",arr[i]);
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}