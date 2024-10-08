#include <stdio.h>

int main() {
    int n,m,num=0;
    scanf("%d %d",&n,&m);

    int arr[n][n];

    for(int j=0; j<m; j++){
        if(j%2==0){
            for(int i=0;i<n;i++){
            arr[i][j]=num;
            num++;
            } 
        } else{
            for(int i=n-1;i>=0;i--){
            arr[i][j]=num;
            num++;
            }

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