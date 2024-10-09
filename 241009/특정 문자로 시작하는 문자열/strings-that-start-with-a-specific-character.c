#include <stdio.h>
#include <string.h>
int main() {
    int n,a,sum=0,cnt=0;
    scanf("%d",&n);
    char arr[n][20];

    for(int i=0;i<n;i++){
        scanf("%s",arr[i]);
    }
    
    scanf(" %c",&a);

    for(int i=0;i<n;i++){
        if(arr[i][0]==a){
            sum+=strlen(arr[i]);
            cnt++;
        }
    }

    printf("%d %.2lf",cnt,(double)sum/cnt);

    // 여기에 코드를 작성해주세요.
    return 0;
}