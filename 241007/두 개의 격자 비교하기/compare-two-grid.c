#include <stdio.h>

int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int arr1[n][m],arr2[n][m],arr3[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr2[i][j]);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i][j]!=arr2[i][j]){
                arr3[i][j]=1;
            } else{
                arr3[i][j]=0;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
    
    

    // 여기에 코드를 작성해주세요.
    return 0;
}