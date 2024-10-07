#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    
    int max=0;   //차액의 최대값
    for(int i= 0 ;i<n;i++){
        for(int j=i +1;j<n;j++){
            int gap=0;  //차이 계산 매번 초기화
            gap= arr[j]-arr[i];
            if(gap>max) max=gap;
        }
    }
    printf("%d", max>0 ? max : 0 );



    /*
    int max=0;//차액의 최대값
    int check_point=0;//차를 산 시점
    for(int i= check_point+1;i<n;i++){ //i는 차를 파는 시점
        int gap=0;//차이 계산 매번 초기화
        gap= arr[i] - arr[check_point];
        if(gap>max) max=gap;
        check_point++;
        gap=0;
    }
    printf("%d", max>0 ? max : 0 );
    */
    // 여기에 코드를 작성해주세요.
    return 0;
}