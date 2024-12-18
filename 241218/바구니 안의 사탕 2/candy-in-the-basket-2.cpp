#include <iostream>
#include <algorithm>
using namespace std;

int arr[101] = {0}; // 바구니 위치 최대값이 100
int ans = 0;

int main() {
    int N, K;
    cin >> N >> K;
    

    for (int i = 0; i < N; i++) {
        int n, idx;
        cin >> n >> idx;
        arr[idx] += n; // 입력되지 않은 좌표는 기본값 0
    }

    for(int c=0; c<=100; c++){
        int sum = 0;
        for(int j = max(0, c-K); j<=min(100, c+K); j++){
            sum += arr[j];
        }
        ans = max(sum , ans);
    }

    cout << ans << endl;
    return 0;
}
