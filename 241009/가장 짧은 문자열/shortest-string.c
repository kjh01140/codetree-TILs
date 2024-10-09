#include <stdio.h>
#include <string.h>

int main() {
    char str1[20], str2[20], str3[20];
    scanf("%s", str1);
    scanf("%s", str2);
    scanf("%s", str3);

    // 문자열 길이를 저장할 변수
    int max = (int)strlen(str1);
    int min = (int)strlen(str1);

    // 각 문자열의 길이를 비교하여 최대 및 최소 길이 찾기
    int lengths[3] = {strlen(str1), strlen(str2), strlen(str3)};
    
    for (int i = 1; i < 3; i++) {
        if (max < lengths[i]) {
            max = lengths[i];
        }
        if (min > lengths[i]) {
            min = lengths[i];
        }
    }

    // 최대 길이와 최소 길이의 차이를 출력
    printf("%d\n", max - min);
    return 0;
}