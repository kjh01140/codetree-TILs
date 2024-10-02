#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        for(int j=1;j<=i+1;j++){
            printf("%d ",i+1);

        }
        printf("\n");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}