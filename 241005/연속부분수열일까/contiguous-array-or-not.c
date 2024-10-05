#include <stdio.h>
#include <stdbool.h>

int main() {
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    int A[n1],B[n2];
    bool Result= true; //기본값은 진실로 설정

    for(int i=0; i<n1; i++){
        scanf("%d",&A[i]);
    }
    for(int i=0; i<n2; i++){
        scanf("%d",&B[i]);
    }
    
   for(int i=0;i<n1;i++){ 
    for(int j=0;j<n2;j++){
        if(i+j>=n1){
            Result=false;
            break; //애초에 뒤에 새롭게 가능할 가능성이 없음.
        }

        if(A[i+j] != B[j]){
            Result=false;
            break;
        }
    }}
    printf(Result?"Yes":"No");
    return 0;
}