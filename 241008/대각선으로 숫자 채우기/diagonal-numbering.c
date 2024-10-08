#include <stdio.h>

int main() {
    int n,m,num=1;
    scanf("%d %d",&n,&m);

    int arr[n][m];
    int sum,cnt=1;

    for(sum=0;sum<=n+m-2;sum++){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){          
                if(i+j==sum){
                        arr[i][j]=cnt;
                        cnt++;                                            
                }
                
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