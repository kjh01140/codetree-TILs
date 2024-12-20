#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int arr[100][2] = {}; // 점 좌표 저장
int main() {
    int N;
    cin >> N;

    // 점 입력 받기
    for (int i = 0; i < N; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }

    int max_area = 0;

    // 모든 세 점의 조합 탐색
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                // 같은 점을 선택하지 않도록 조건 설정
                if (i == j || j == k || i == k) continue;

                // 조건: x축에 평행한 변, y축에 평행한 변
                if (arr[i][0] == arr[j][0] && arr[i][1] == arr[k][1]) {
                    int width = abs(arr[j][1] - arr[i][1]);  // 세로 길이
                    int height = abs(arr[k][0] - arr[i][0]); // 가로 길이
                    int area = width * height;             // 넓이 계산
                    max_area = max(max_area, area);        // 최대값 갱신
                }
            }
        }
    }

    cout << max_area << endl; // 넓이를 2배로 출력
    return 0;
}
