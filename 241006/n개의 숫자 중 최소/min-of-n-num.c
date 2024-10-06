#include <stdio.h>
#include <limits.h>

int main() {
    int N,cnt=0;
    scanf("%d",&N);
    int arr[N],min=INT_MAX;

    for(int i=0;i<N;i++ ){
        scanf("%d",&arr[i]);
        if(arr[i]<min){
            min=arr[i];
            cnt=1;
        } else if(min==arr[i]){
            cnt++;
        }
    }
    printf("%d %d",min,cnt);

    // 여기에 코드를 작성해주세요.
    return 0;
}