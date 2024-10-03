#include <stdio.h>

int main() {
    int n,j=0;
    scanf("%d",&n);
    int arr[n],arr2[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            arr2[j]=arr[i];
            j++;
        }
    }
    
    for(int p=0;p<j;p++){
        printf("%d ",arr2[p]);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}