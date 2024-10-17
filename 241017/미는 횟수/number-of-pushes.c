#include <stdio.h>
#include <string.h>

int main() {
    char s1[101], s2[101];
    scanf("%s", s1);
    scanf("%s", s2);

    int cnt = 0, len = strlen(s1);

    // s1과 s2의 길이가 다르면 회전으로 같아질 수 없으므로 바로 종료
    if (len != strlen(s2)) {
        printf("-1");
        return 0;
    }

    for (;;) {
        cnt++;
        // 마지막 문자를 temp에 저장
        char temp = s2[len - 1];

        // 오른쪽으로 한 칸씩 이동
        for (int i = len - 1; i > 0; i--) {
            s2[i] = s2[i - 1];
        }

        // 첫 번째 자리에 temp 넣기
        s2[0] = temp;

        // s1과 s2가 같으면 종료
        if (strcmp(s1, s2) == 0) break;

        // 무한 루프 방지를 위해 cnt가 len을 초과하면 회전할 수 없는 경우로 처리
        if (cnt > len) {
            printf("-1");  // 두 문자열이 같아질 수 없는 경우
            return 0;
        }
    }

    printf("%d", cnt);
    return 0;
}