#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    bool s=false;

    scanf("%d",&n);

    for(int i=2;i<n-1;i++){
        if(n%i==0){
            s=true;
        }
    }
    printf(s==true?"C":"N");
    // 여기에 코드를 작성해주세요.
    return 0;
}