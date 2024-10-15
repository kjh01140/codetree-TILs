#include <stdio.h>
#include <string.h>


int main() {
    char arr1[1000],arr2[1000];
    scanf("%s",arr1);
    scanf("%s",arr2);

    int cnt=0 , len = strlen(arr1);
    for(int i=0; i<len-1;i++){
        if(arr1[i]==arr2[0]){
            if(arr1[i+1]==arr2[1]){
                cnt++;
            }
        }
    }

    printf("%d",cnt);
    
    // 여기에 코드를 작성해주세요.
    return 0;
}