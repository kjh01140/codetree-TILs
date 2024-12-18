#include <iostream>
#include <algorithm>
using namespace std;

int arr[101] = {0}; // 바구니 위치 최대값이 100
int ans = 0;

int main() {
    int N, K;
    cin >> N >> K;
    int size = K * 2 + 1; // 범위의 크기

    for (int i = 0; i < N; i++) {
        int n, idx;
        cin >> n >> idx;
        arr[idx] += n; // 입력되지 않은 좌표는 기본값 0
    }

    // 기존 방식 유지
    for (int i = 0; i <= 100 - size + 1; i++) { // 탐색 범위는 배열 전체(0~100)
        int sum = 0;
        for (int j = 0; j < size; j++) {
            sum += arr[i + j];
        }
        ans = max(ans, sum);
    }

    cout << ans << endl;
    return 0;
}
