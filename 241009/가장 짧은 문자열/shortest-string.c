#include <stdio.h>
#include <string.h>
int main() {
    int str1[20],str2[20],str3[20],arr[3];
    scanf("%s",str1);
    scanf("%s",str2);
    scanf("%s",str3);

    
    int a=(int)strlen(str1), b=(int)strlen(str2), c=(int)strlen(str3);
    int max=a,min=a;
    arr={a,b,c};

    for(int i=1;i<3;i++){
        if(max<arr[i]){
            max=arr[i]
        }
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("%d",max-min);
    
    // 여기에 코드를 작성해주세요.
    return 0;
}