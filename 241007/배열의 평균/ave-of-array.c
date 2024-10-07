#include <stdio.h>

int main() {
    int arr[2][4];
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    

    for(int i=0;i<2;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum+=arr[i][j];
        }
        printf("%.1lf ",(double)sum/4);
    }

    printf("\n");

    for(int j=0;j<4;j++){
        int sum=0;
        for(int i=0;i<2;i++){
            sum+=arr[i][j];
        }
        printf("%.1lf ",(double)sum/2);
    }

    printf("\n");

    int sum=0;  
    for(int i=0;i<2;i++){ 
        for(int j=0;j<4;j++){
            sum+=arr[i][j];
        }
        
    }
    printf("%.1lf ",(double)sum/8);


    // 여기에 코드를 작성해주세요.
    return 0;
}