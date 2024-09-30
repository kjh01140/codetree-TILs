#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        if(i==0){
            for(int j=0;j<n;j++){
                printf("*");
            }    
        }else if(i%2==0){
            for(int j=0;j<i+1;j++){
                printf(" ");
            }
            for(int j=0;j<(n-i)/2;j++){
                printf("* ");
            }
        } else{
            for(int j=0;j<i;j++){
                printf(" ");
            }
            for(int j=0;j<(n-i+1)/2;j++){
                printf("* ");
            }
        }
      printf("\n");  
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}