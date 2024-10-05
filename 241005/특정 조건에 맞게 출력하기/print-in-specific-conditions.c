#include <stdio.h>

int main() {
    int arr[100],cnt=0;
    for(int i=0;i<100;i++){
        scanf("%d",&arr[i]);
        
        if(arr[i]==0){
            break;
        }
        cnt++;

    }

    for(int j=0;j<cnt;j++){
        if(arr[j]%2==0){
            printf("%d ",arr[j]/2);
        } else{
            printf("%d ",arr[j]+3);
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}