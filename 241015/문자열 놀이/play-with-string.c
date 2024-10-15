#include <stdio.h>
#include <string.h>
int main() {
    char s[100];
    int q;
    scanf("%s",s);
    scanf("%d",&q);

    int len=strlen(s);
    
    for(int i=0;i<q;i++){
        
        
        int n;
        scanf("%d",&n);

        if(n==1){
            int a,b;
            char temp;
            scanf("%d %d",&a,&b);
            temp=s[a-1];
            s[a-1]=s[b-1];
            s[b-1]=temp;

            printf("%s\n",s);

        } else{
            char a,b;
            scanf(" %c %c",&a,&b);
            for(int j=0;j<len;j++){
                if(s[j]==a){
                    s[j]=b;
                }
            }
            printf("%s\n",s);

        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}