#include <stdio.h>

int main() {
    int n,idx=0,cnt=0;
    scanf("%d",&n);
    int arr[n];
     for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==2){
            cnt++;
            if(cnt==3){
                printf("%d",i+1);
            }
            continue;
        }
     }
    // 여기에 코드를 작성해주세요.
    return 0;
}