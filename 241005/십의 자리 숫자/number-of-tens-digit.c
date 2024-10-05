#include <stdio.h>

int main() {
    int arr[100],cnt_arr[10]={0,};

    for(int i=0;;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==0){
            break;
        }

        cnt_arr[arr[i]/10]++;

    }
    for(int j=1;j<=9;j++){
        printf("%d - %d\n",j,cnt_arr[j]);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}