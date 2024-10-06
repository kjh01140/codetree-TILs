#include <stdio.h>
#define MAX_N 1000

int main() {
    int n;
    int arr[MAX_N];

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }


    int prev_max_idx = n; //key point

    while(1){
        int max_idx=0;

        for(int i=1;i<prev_max_idx;i++){
            if(arr[i]>arr[max_idx]) max_idx=i;
        }
        printf("%d ", max_idx+1 );

        if(max_idx == 0)
            break;
        // 바로 직전 최대 index를 갱신해줍니다.
		prev_max_idx = max_idx;
        
    }
    
    // 여기에 코드를 작성해주세요.
    return 0;
}