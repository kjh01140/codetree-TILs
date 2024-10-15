#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main() {
    char arr1[1000],arr2[1000];
    scanf("%s",arr1);
    scanf("%s",arr2);

    int idx=-1, len_arr1 = strlen(arr1), len_arr2 = strlen(arr2);
    bool result=false;


        // arr1에서 arr2가 시작하는 위치를 찾습니다.
    for (int i = 0; i <= len_arr1 - len_arr2; i++) {
        // 첫 번째 문자가 일치하는 경우만 비교를 시작합니다.
        if (arr1[i] == arr2[0]) {
            result = true;  // 일단 일치한다고 가정
            for (int j = 1; j < len_arr2; j++) {
                if (arr1[i + j] != arr2[j]) {  // 하나라도 다르면 false로 설정
                    result = false;
                    break;
                }
            }
            if (result == true) {  // 완전히 일치하는 경우 idx 설정하고 탈출
                idx = i;
                break;
            }
        }
    }

    printf("%d", idx);  // 결과 출력 (찾지 못하면 -1 출력)
    // 여기에 코드를 작성해주세요.
    return 0;
}