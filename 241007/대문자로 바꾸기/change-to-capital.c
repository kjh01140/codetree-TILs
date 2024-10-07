#include <stdio.h>

int main() {
    // 2차원 배열을 구현합니다.
	char arr[5][3];
	
	// 각 줄마다 알파벳 소문자를 입력받습니다.
	for(int i = 0; i < 5; i++)
		for(int j = 0; j < 3; j++)
			scanf("%c ", &arr[i][j]);
	
	// 알파벳 소문자를 대문자로 바꾸어 출력합니다.
	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 3; j++) {
			
			printf("%c ", arr[i][j]+'A' - 'a');
		}
		printf("\n");
	}

    return 0;
}