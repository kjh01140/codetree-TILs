#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=100;
    for(int i=n-1;i>=0;i--){
        for(int j=i-1;j>=0;j--){
            int gap=0;
            gap=arr[i]-arr[j];
            if(gap<min) min =gap;
        }
    }
    printf("%d",min);
    // 여기에 코드를 작성해주세요.
    return 0;
}