#include <iostream>
#include <algorithm>
using namespace std;

int nums[15];
int a, b, c, d;

int main() {
    // 입력값 받기
    for (int i = 0; i < 15; i++) {
        cin >> nums[i];
    }

    // 입력값 정렬
    sort(nums, nums + 15);

    // a는 가장 작은 값
    a = nums[0];

    // b, c, d를 찾기 위해 반복
    for (int i = 1; i < 15; i++) {
        for (int j = i + 1; j < 15; j++) {
            for (int k = j + 1; k < 15; k++) {
                b = nums[i] - a;
                c = nums[j] - a;
                d = nums[k] - a;

                // 조합 값 계산
                int calculated[15] = {
                    a, b, c, d,
                    a + b, a + c, a + d,
                    b + c, b + d,
                    c + d,
                    a + b + c, a + b + d, a + c + d, 
                       b + c + d,
                    a + b + c + d
                };

                // 계산된 조합 정렬
                sort(calculated, calculated + 15);

                // 입력값과 비교
                bool isValid = true;
                for (int l = 0; l < 15; l++) {
                    if (nums[l] != calculated[l]) {
                        isValid = false;
                        break;
                    }
                }

                // 조건 만족 시 출력
                if (isValid) {
                    cout << a << " " << b << " " << c << " " << d << endl;
                    return 0;
                }
            }
        }
    }

    // 답이 없을 경우
    cerr << "조건을 만족하는 a, b, c, d를 찾을 수 없습니다." << endl;
    return 1;
}
