#include <stdio.h>
#include <string.h>

int main() {
	char str1[101],str2[101];
	fgets(str1,100,stdin);
    fgets(str2,100,stdin);

    for(int i=0;i<strlen(str1)-1;i++){
        if(str1[i]==' '){
            continue;
        } else{
            printf("%c",str1[i]);
        }

    }
    for(int i=0;i<strlen(str2);i++){
        if(str2[i]==' '){
            continue;
        } else{
            printf("%c",str2[i]);
        }

    }
	return 0;
}