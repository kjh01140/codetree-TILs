#include <iostream>
#include <algorithm>
using namespace std;

int arr[10001] = {}; // 위치는 최대 10,000이므로 배열 크기를 10,001로 선언
int ans = 0;

int main() {
    int N, K;
    cin >> N >> K;

    int max_n = 0; // 최대 위치를 저장

    // 입력받아 점수를 저장
    for (int i = 0; i < N; i++) {
        int n;
        char input;
        cin >> n >> input;
        max_n = max(max_n, n); // 최대 위치 갱신
        arr[n] = (input == 'G') ? 1 : 2; // G는 1점, H는 2점
    }

    // 슬라이딩 윈도우 방식으로 최대 점수 계산
    int current_sum = 0;

    // 첫 번째 윈도우 계산
    for (int i = 1; i <= K && i <= max_n; i++) {
        current_sum += arr[i];
    }

    ans = current_sum;

    // 윈도우를 이동하며 점수 갱신
    for (int i = 2; i <= max_n - K + 1; i++) { // 제한범위의 끝 인덱스 : i+K-1 <= max_n 이항정리 --> i <= max_n-K+1
        current_sum = current_sum - arr[i - 1] + arr[i + K - 1];
        ans = max(ans, current_sum);
    }

    cout << ans << endl;
    return 0;
}
