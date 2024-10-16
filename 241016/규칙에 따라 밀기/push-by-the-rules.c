#include <stdio.h>
#include <string.h>

int main() {
    char s[100],c[100];
    
    scanf("%s",s);
    scanf("%s",c);
    int len_s= strlen(s);
    int len_c= strlen(c);

    for(int i=0;i<len_c;i++){
        if(c[i]=='L'){
            char temp= s[0];
            for(int j=0;j<len_s-1;j++){
                s[j]=s[j+1];
            }
            s[len_s-1]=temp;
            
            
        }else{
            char temp= s[len_s-1];
            for(int j=len_s-1; j>0;j--){
                s[j]=s[j-1];
            }
            s[0]=temp;
            

           
        
        }
    }
    printf("%s",s);
    // 여기에 코드를 작성해주세요.
    return 0;
}