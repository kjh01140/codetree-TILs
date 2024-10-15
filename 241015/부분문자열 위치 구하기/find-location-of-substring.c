#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main() {
    char arr1[1000],arr2[1000];
    scanf("%s",arr1);
    scanf("%s",arr2);

    int idx=-1, len_arr1 = strlen(arr1), len_arr2 = strlen(arr2);
    bool result=false;


    for(int i=0; i < len_arr1 - len_arr2 ; i++){
        if(arr1[i]==arr2[0]){
            for(int j=1; j< len_arr2; j++){
                if(arr1[i+j]==arr2[j]){
                    result= true;
                    idx=i;
                } else{
                    result=false;
                    break;
                }
            }
        }
        if(result==true){
            break;
        } else{
            continue;
        }
    }
    printf("%d",idx);
    // 여기에 코드를 작성해주세요.
    return 0;
}