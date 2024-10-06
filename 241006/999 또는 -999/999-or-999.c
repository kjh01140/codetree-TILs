#include <stdio.h>
#include <limits.h>


int main() {
    int arr[100], max=INT_MIN, min=INT_MAX;
    for(int i=0;i<100;i++){
        scanf("%d",&arr[i]);

        if(arr[i]==999||arr[i]==-999){
            break;
        }
       if(arr[i]>max) max=arr[i];
       if(arr[i]<min) min=arr[i];

    }
    printf("%d %d",max,min);
    // 여기에 코드를 작성해주세요.
    return 0;
}