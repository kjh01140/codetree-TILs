#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main() {
    char arr[20];
    scanf("%s",arr);
    int len = strlen(arr);

    bool exists_1 = false;
    bool exists_2 = false;

    for(int i=0; i<len-1;i++){
        if(arr[i]=='e' && arr[i+1]=='e'){
            exists_1 = true;

        }
    }

    for(int i=0; i<len-1;i++){
        if(arr[i]=='a' && arr[i+1]=='b'){
            exists_2 = true;
            
        }
    }
    if(exists_1 == true) printf("Yes ");
	else printf("No ");
    if(exists_2 == true) printf("Yes");
	else printf("No");


    // 여기에 코드를 작성해주세요.
    return 0;
}