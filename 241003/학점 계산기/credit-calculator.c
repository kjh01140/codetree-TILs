#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    double arr[n],sum=0,average=0;

    for(int i=0;i<n;i++){
        scanf("%lf",&arr[i]);
        sum+=arr[i];

    }

    average=sum/n;
    if(average>=4.0){
        printf("%.1lf \nPerfect",average);
    } else if(average>=3.0){
        printf("%.1lf \nGood",average);
    } else{
        printf("%.1lf \nPoor",average);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}