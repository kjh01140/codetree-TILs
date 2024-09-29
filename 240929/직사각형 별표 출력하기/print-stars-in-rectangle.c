#include <stdio.h>

int main() {
    int n,m;
    scanf("%d %d",&n,&m);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("* ");
        }
        printf("\n");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}