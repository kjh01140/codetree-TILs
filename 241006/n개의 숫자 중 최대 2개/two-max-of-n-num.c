#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    int arr[N],temp;
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("%d %d",arr[0],arr[1]);
    // 여기에 코드를 작성해주세요.
    return 0;
}