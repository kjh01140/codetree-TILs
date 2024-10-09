#include <stdio.h>
#include <string.h>
int main() {
    char A[100],B[100],C1[200],C2[200];
    scanf("%s",A);
    scanf("%s",B);
    strcat(C1,A); strcat(C1,B);
    strcat(C2,B); strcat(C2,A);
    

    if(strcmp(C1,C2)==0) printf("true");
    else printf("false");
    
    
    // 여기에 코드를 작성해주세요.
    return 0;
}