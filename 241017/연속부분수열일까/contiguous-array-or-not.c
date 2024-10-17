#include <stdio.h>
#include <stdbool.h>
int main() {
    int n1,n2; //길이
    scanf("%d %d",&n1,&n2);
    int str1[100],str2[100];
    
    for(int i=0;i<n1;i++){
        scanf("%d",&str1[i]);
    }
    for(int i=0;i<n2;i++){
        scanf("%d",&str2[i]);
    }
    //배열 입력 완료


    bool test= false;

    for(int i=0;i<n1;i++){
        if(str1[i]==str2[0]){
            test = true;
            for(int j=0; j<n2; j++){
                if(str1[i+j] != str2[j]){
                    test = false;
                    break;
                } 
            }
        }
    }
    if(test){
        printf("Yes");
    } else{
        printf("No");
    }
   
    // 여기에 코드를 작성해주세요.
    return 0;
}