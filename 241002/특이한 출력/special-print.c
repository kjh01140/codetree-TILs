#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if((i+j)%4==0){
                printf("(%d, %d)\n",i,j);

            }else{
                printf("(%d, %d) ",i,j);

            }
		}
	}
    // 여기에 코드를 작성해주세요.
    return 0;
}