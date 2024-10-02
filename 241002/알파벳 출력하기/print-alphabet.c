#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
	char cnt = 'A';
	
	// 알파벳을 정사각형 모양으로 출력합니다.
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < i+1; j++) {
			printf("%c", cnt);
			cnt++;
            if(cnt=='Z'+1)
                cnt='A';
		}
		printf("\n");
	}
    // 여기에 코드를 작성해주세요.
    return 0;
}