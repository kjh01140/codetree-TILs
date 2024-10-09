#include <stdio.h>
#include <string.h>

int main() {
    int n,t=0;
    scanf("%d",&n);

    char arr[10][5];
    char n_arr[50];

    for(int i=0;i<n;i++){
        scanf("%s",&arr[i]);
    }
    for(int i = 0; i < n; i++){
        int len = strlen(arr[i]);
        for(int j=0;j<len;j++){
            n_arr[t++]=arr[i][j];
        }
        
    }
    n_arr[t]='\0';

    for(int i = 0; i < t; i++) {
		printf("%c", n_arr[i]);
		if((i + 1) % 5 == 0)
			printf("\n");
	}
    // 여기에 코드를 작성해주세요.
    return 0;
}