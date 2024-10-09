#include <stdio.h>
#include <string.h>

int main() {
	
	char arr[10][201];
    int len_all=0;
	for (int i = 0; i < 10; i++) {
		scanf("%s", arr[i]);
	}

	for(int i=0;i<10;i++){
        int len =strlen(arr[i]);
        len_all+=len;
    }
    printf("%d", len_all);

	return 0;

}