#include <stdio.h>
#include <string.h>
int main() {

    char s[20],a;
    scanf("%s",s);
    scanf(" %c",&a);
    int length= strlen(s);
    int start_idx = -1;

    for(int i=0;i<length;i++){
        if(s[i]==a){
            start_idx=i;
            break;
        }
    }

    

    if(start_idx==-1){
        printf("No");
    } else{
        printf("%d",start_idx);
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}