#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;           // 문자열 길이
    string arr;
    cin >> arr;         // 문자열 입력

    // 1부터 N까지 '부분 문자열의 길이'를 시도
    for (int i = 1; i <= N; i++) {
        bool repeated = false;  // 길이 i에서 '반복되는 부분 문자열'을 찾았는지 여부

        // 시작 인덱스 j
        for (int j = 0; j + i <= N; j++) {
            // j 이후에 등장하는 다른 부분 문자열(k)들과 비교
            for (int k = j + 1; k + i <= N; k++) {
                bool isSame = true;
                // 길이 i만큼 문자가 모두 같은지 확인
                for (int l = 0; l < i; l++) {
                    if (arr[j + l] != arr[k + l]) {
                        isSame = false;
                        break;
                    }
                }
                // 만약 동일한 부분 문자열을 찾았다면(즉, 2번 이상 등장)
                if (isSame) {
                    repeated = true;
                    break;  // 더 볼 필요 없이 반복 여부만 알면 됨
                }
            }
            if (repeated) break; // 이미 길이 i가 반복되면 종료
        }

        // 길이 i에서 '반복되지 않는' 부분 문자열을 찾았다면
        // 즉 repeated == false 라면, 그것이 최소 길이이므로 바로 출력 후 종료
        if (!repeated) {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}
