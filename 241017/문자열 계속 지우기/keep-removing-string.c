#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char str1[100], str2[100];
    scanf("%s", str1);  // str1 입력
    scanf("%s", str2);  // str2 입력

    int len1 = strlen(str1);  // str1의 길이
    int len2 = strlen(str2);  // str2의 길이

    bool test = false;

    // str1에서 str2가 존재할 경우 계속해서 삭제
    while (true) {
        test = false;

        // str1의 각 원소에서 시작해 str2가 포함되어 있는지 확인
        for (int i = 0; i <= len1 - len2; i++) {  // 범위 제한
            bool found = true;
            // 부분 문자열 비교를 수동으로 진행
            for (int j = 0; j < len2; j++) {
                if (str1[i + j] != str2[j]) {
                    found = false;
                    break;
                }
            }

            // 부분 문자열을 찾으면 삭제
            if (found) {
                test = true;
                for (int j = i; j < len1 - len2; j++) {
                    str1[j] = str1[j + len2];  // 앞으로 이동
                }
                len1 -= len2;  // 길이 줄이기
                str1[len1] = '\0';  // NULL로 끝을 표시
                break;  // 삭제 후 다시 처음부터 검사
            }
        }

        if (!test) {
            break;  // 더 이상 부분 문자열이 없으면 종료
        }
    }

    // 결과 출력
    printf("%s\n", str1);

    return 0;
}