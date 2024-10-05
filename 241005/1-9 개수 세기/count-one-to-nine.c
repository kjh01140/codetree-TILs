#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int cnt_arr[10]={0,},arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i+1]);
        cnt_arr[arr[i+1]]++;
    }
    for(int j=1;j<10;j++){
        printf("%d\n",cnt_arr[j]);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}