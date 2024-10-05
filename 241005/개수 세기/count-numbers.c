#include <stdio.h>

int main() {
    int n,m,cnt=0;
    scanf("%d %d",&n,&m);
    int arr[100];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]==m){
            cnt++;
        }
    }
    printf("%d",cnt);
    // 여기에 코드를 작성해주세요.
    return 0;
}