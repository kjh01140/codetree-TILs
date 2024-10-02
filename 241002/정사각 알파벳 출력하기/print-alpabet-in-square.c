#include <stdio.h>

int main() {
    int n,cnt=65;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%c",cnt);
            cnt++;
        }
        printf("\n");
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}