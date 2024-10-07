#include <stdio.h>

int main() {
    int num=1,n,m;
    scanf("%d %d",&n,&m);
    int arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr[i][j]=num;
            num++;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",arr[i][j]);
            
        }
        printf("\n");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}