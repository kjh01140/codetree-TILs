#include <stdio.h>

int main() {
    int arr1[3][3],arr2[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr1[i][j]);
        }
    }  
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr2[i][j]);
        }
    }  

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr1[i][j]*arr2[i][j]);
        }
        printf("\n");
    }  
    // 여기에 코드를 작성해주세요.
    return 0;
}