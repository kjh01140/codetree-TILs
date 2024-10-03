#include <stdio.h>

int main() {
    int n,cnt=0;
    scanf("%d",&n);

    for(int i=0;i<n;i++){ //학생수
        int arr[4],sum=0; //한 학생의 네 과목
        for(int j=0;j<4;j++){
            scanf("%d",&arr[j]);
            sum+=arr[j];
        }

        if((double)sum/4>=60){
            printf("pass\n");
            cnt++;
        }else{
            printf("fail\n");
        }

    }

    printf("%d",cnt);
    // 여기에 코드를 작성해주세요.
    return 0;
}