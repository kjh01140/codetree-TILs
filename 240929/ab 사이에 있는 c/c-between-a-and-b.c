#include <stdio.h>
#include <stdbool.h>

int main() {
    int a,b,c;
    bool s=false;

    scanf("%d %d %d",&a,&b,&c);

    for(int i=a;i<=b;i++){
        if(i%c==0){
            s=true;
            break;
        }

    }
    
	printf(s==true?"YES":"NO");
    return 0;
}
    //printf(s==true?"YES":"NO");
    // 여기에 코드를 작성해주세요.