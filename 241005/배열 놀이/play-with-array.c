#include <stdio.h>

int main() {
    int n,q;
    scanf("%d %d",&n,&q);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int j=0;j<q;j++){//질의 반복

        int a,b,c,idx=0;   
        scanf("%d",&a); //첫번째 수_질의 버전
        
        if(a==1){
            scanf("%d",&b);
            printf("%d\n",arr[b-1]);

        } else if(a==2){
            scanf("%d",&b);
            for(int i=0;i<n;i++){
                if(b==arr[i]){
                    idx=i+1;
                    break;
                }
            }
            printf("%d\n",idx);

        } else if(a==3){
            scanf("%d %d",&b,&c);
            for(int i=b;i<=c;i++){
                printf("%d ",arr[i-1]);
            }
            printf("\n");

        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}