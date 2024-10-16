#include <stdio.h>
#include <string.h>

int main() {
    int n,sum=0;
    char str[10000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int num;
        scanf("%d",&num);
        sum+=num;
    }
    sprintf(str,"%d",sum);

    int len=strlen(str),temp=str[0];

    if(len>1){for(int i=1;i<len-1;i++){
        str[i-1]=str[i];
    }
    str[len-1]=temp;
    }
    printf("%s",str);
    // 여기에 코드를 작성해주세요.
    return 0;
}