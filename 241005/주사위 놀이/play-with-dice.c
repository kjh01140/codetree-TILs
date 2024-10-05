#include <stdio.h>

int main() {
    int cnt_arr[7]={0,},arr[10];

    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
        cnt_arr[arr[i]]++;
    }
    for(int j=1;j<=6;j++){
        printf("%d - %d\n",j,cnt_arr[j]);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}