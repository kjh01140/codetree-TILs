#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n][n];

    for(int i=0;i<n;i++){
        arr[i][i]=1;
        arr[i][0]=1;
    }

    for(int i=2;i<n;i++){
        for(int j=1;j<i;j++){
            arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
        }

    }

    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");

    }
    // 여기에 코드를 작성해주세요.
    return 0;
}