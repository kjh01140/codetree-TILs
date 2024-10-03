#include <stdio.h>

int main() {
    int arr[10],sum=0,cnt=0;

    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);

        if(arr[i]==0){
            break;
        } else{
            cnt++;
            sum+=arr[i];
        }
    }

    printf("%d %.1lf",sum,(double)sum/cnt);
    // 여기에 코드를 작성해주세요.
    return 0;
}