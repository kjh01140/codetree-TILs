#include <stdio.h>

int main() {
    int r_arr[10]={0,},N,a,b,sum=0;
    scanf("%d %d",&a,&b);

    while(1){
        r_arr[a%b]++;
        a=a/b;
        if(a<=1){
            break;
        }

    }
    for(int i=0;i<=9;i++){
        if(r_arr[i]==0){
            continue;
        }
        sum+=r_arr[i]*r_arr[i];
    }
printf("%d",sum);
    // 여기에 코드를 작성해주세요.
    return 0;
}