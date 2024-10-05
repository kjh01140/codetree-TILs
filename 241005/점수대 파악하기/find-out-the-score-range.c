#include <stdio.h>

int main() {
    int arr[100],cnt_arr[11]={0,};

    for(int i=1;;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==0){
            break;
        }
        if(arr[i] < 10)
			continue;

        cnt_arr[arr[i]/10]++;

    }
    for(int i = 10; i >= 1; i--) {
        printf("%d0 - %d\n", i, cnt_arr[i]);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}