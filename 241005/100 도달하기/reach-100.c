#include <stdio.h>

int main() {
    int n,arr[100],p,pp;
    scanf("%d",&n);
    p=n;
    pp=1;

    printf("%d %d ",pp,p);

    for(int i=0;;i++){
        arr[i]=p+pp;

        printf("%d ",arr[i]);
        
        if(arr[i]>100){
            break;
        }
        pp=p;
        p=arr[i];

    }
    // 여기에 코드를 작성해주세요.
    return 0;
}