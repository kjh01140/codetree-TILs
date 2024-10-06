#include <stdio.h>

int main() {
    int N,max=-1;
    scanf("%d",&N);
    int arr[N],cnt_arr[1000]={0,};

    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
        cnt_arr[arr[i]]++;
    }

    for(int i=1000;i>=0;i--){
        if(cnt_arr[i]!=1){
            continue;
        } else{
            max=i;
            break;
        }
    }
    printf("%d",max);
    // 여기에 코드를 작성해주세요.
    return 0;
}