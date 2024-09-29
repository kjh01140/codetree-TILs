#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    bool s=true;
    scanf("%d",&n);
    for(int i=2; i<n;i++){
        if (n%i==0){
            s=false;
        }
    }
    printf(s?"P":"C");
    // 여기에 코드를 작성해주세요.
    return 0;
}