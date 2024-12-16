#include <iostream>
#include <algorithm>
using namespace std;

int arr[10001] = {0,}; // 위치는 최대 10,000이므로 배열 크기를 10,001로 선언
int ans = 0;

int main() {
    int N, K;
    cin >> N >> K;

    int max_n = 0; // 최대 위치를 저장

    // 입력받아 점수를 저장
    for (int i = 0; i < N; i++) {
        int n;
        char input;
        cin >> n >> input; //1-indexed
        max_n = max(max_n, n); // 최대 위치 갱신
        arr[n] = (input == 'G') ? 1 : 2; // G는 1점, H는 2점
    }

    for(int i=0; i<=10001 - K; i++){
        int sum = 0;
        for(int j=i; j<=i+K; j++){
            sum += arr[j];
        }
        ans = max(ans, sum);
    }

    cout << ans << endl;
    return 0;
}
