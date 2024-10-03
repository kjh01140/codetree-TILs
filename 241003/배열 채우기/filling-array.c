#include <stdio.h>

int main() {
    int arr[10],cnt=0;

    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
        
        if(arr[i]==0){
        break;
        }

        cnt++;

    }
       
    for(int j=cnt-1;j>=0;j--){
        printf("%d ",arr[j]);
    }   
    

    // 여기에 코드를 작성해주세요.
    return 0;
}