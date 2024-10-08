#include <stdio.h>

int main() {
    int n,cnt=1;
    scanf("%d",&n);
    int arr[n][n];

    if(n%2==1){
        for(int j=n-1;j>=0;j--){
            if(j%2==0){
                for(int i=n-1;i>=0;i--){
                    arr[i][j]=cnt;
                    cnt++;
                }
            } else{
                for(int i=0;i<n;i++){
                    arr[i][j]=cnt;
                    cnt++;
                }

            }
            
        }
    } else {
        for(int j=n-1;j>=0;j--){
            if(j%2==1){
                for(int i=n-1;i>=0;i--){
                    arr[i][j]=cnt;
                    cnt++;
                }
            } else{
                for(int i=0;i<n;i++){
                    arr[i][j]=cnt;
                    cnt++;
                }

            }
            
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