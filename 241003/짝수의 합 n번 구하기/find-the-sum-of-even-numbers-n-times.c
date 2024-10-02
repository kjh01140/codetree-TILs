#include <stdio.h>

int main() {
    int n,a,b;

    scanf("%d",&n);

    for(int j=0;j<n;j++){
        scanf("%d %d",&a,&b);
        int sum=0;
        
        for(int i=a;i<=b;i++){
            
            if(i%2==0){
            sum+=i;
            }   
        }
        printf("%d\n",sum);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}