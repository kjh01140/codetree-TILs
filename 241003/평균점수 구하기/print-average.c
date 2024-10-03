#include <stdio.h>

int main() {
    double arr[8],sum=0;

    for(int i=0;i<8;i++){
        scanf("%lf",&arr[i]);
        sum+=arr[i];
    }
    printf("%.1lf",sum/8);
    // 여기에 코드를 작성해주세요.
    return 0;
}