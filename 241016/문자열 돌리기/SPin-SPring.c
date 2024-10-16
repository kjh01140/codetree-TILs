#include <stdio.h>
#include <string.h>

int main() {
    char s[20];
    scanf("%s",s);
    int L= strlen(s);

    printf("%s\n",s);

    for(int i=0;i<L;i++){   //L회 반복
        char temp= s[L-1];
        for (int j=L-1; j>0; j--){
            s[j]=s[j-1];
        }
        s[0]=temp;
        printf("%s\n",s);
    }
     
    // 여기에 코드를 작성해주세요.
    return 0;
}