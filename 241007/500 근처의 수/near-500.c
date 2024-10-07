#include <stdio.h>

int main() {
    int arr[10],max=0,min=1000;
    
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<10;i++){
        if(arr[i]<500){
            if(arr[i]>max) max=arr[i];
        } else{
            if(arr[i]<min) min=arr[i];
        }
    }
    printf("%d %d",max,min);
    // 여기에 코드를 작성해주세요.
    return 0;
}