#include <stdio.h>

int main() {
    int n,num=1;
    scanf("%d",&n);

    int arr[n][n];

    for(int j=0; j<n; j++){
        
        for(int i=0;i<n;i++){
            arr[i][j]=num;
            num++;
        }     
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}