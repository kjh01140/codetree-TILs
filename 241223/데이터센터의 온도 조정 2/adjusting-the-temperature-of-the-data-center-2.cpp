#include <iostream>
#include <algorithm>
using namespace std;

// 글로벌 변수 선언
int C, G, H;
int arr[1000][2]= {};
// 온도에 따른 비용 계산 함수
int Output(int n, int Ta, int Tb) {
    if (n < Ta) {
        return C; // Ta보다 낮은 경우 비용 C
    } else if (n <= Tb) {
        return G; // [Ta, Tb] 범위에 있는 경우 비용 G
    } else {
        return H; // Tb보다 높은 경우 비용 H
    }
}

int main() {
    int N; // 기계의 수
    cin >> N >> C >> G >> H; // 비용 입력

    int ans = 0; // 최대 작업량 저장 변수

    for(int i=0; i < N; i++){
        cin >> arr[i][0] >> arr[i][1];
    }

    // 온도를 0에서 1000까지 순회하며 작업량 계산
    for (int i = 0; i <= 1000; i++) {
        int sum = 0;

        // 각 온도에서 모든 기계의 작업량 계산
        for (int j = 0; j < N; j++) {
            sum += Output(i, arr[j][0], arr[j][1]); // 작업량 계산
        }

        // 최대 작업량 갱신
        ans = max(ans, sum);
    }

    // 결과 출력
    cout << ans << endl;

    return 0;
}
