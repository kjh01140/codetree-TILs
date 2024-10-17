#include <stdio.h>
#include <string.h>

int main() {
    char s1[101], s2[101];
    scanf("%s", s1);  // 문자열 A 입력
    scanf("%s", s2);  // 문자열 B 입력

    int len = strlen(s1);  // 문자열 길이 저장
    int cnt = 0;

    // 문자열 A와 B의 길이가 다른 경우 즉시 -1 반환
    if (len != strlen(s2)) {
        printf("-1");
        return 0;
    }

    for (int i = 0; i < len; i++) {
        // 마지막 문자를 임시로 저장한 후 오른쪽으로 이동
        char temp = s1[len - 1];
        for (int j = len - 1; j > 0; j--) {
            s1[j] = s1[j - 1];
        }
        s1[0] = temp;  // 첫 번째 자리에 마지막 문자 넣기

        cnt++;  // 회전 횟수 증가

        // 회전 후 문자열 A와 B가 같으면 회전 횟수 출력
        if (strcmp(s1, s2) == 0) {
            printf("%d", cnt);
            return 0;
        }
    }

    // 끝까지 같아지지 않으면 -1 출력
    printf("-1");
    return 0;
}