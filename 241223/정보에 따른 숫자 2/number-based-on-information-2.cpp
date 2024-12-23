#include <iostream>
#include <climits>
#include <cstdlib>
using namespace std;

int T, a, b, cnt = 0;
int S_coords[1000], N_coords[1000]; // 'S'와 'N' 좌표를 각각 저장
int S_count = 0, N_count = 0;       // 'S'와 'N' 좌표 개수

// 특정 문자(`c`)와의 최소 거리 계산 함수
int Dis(int i, char c) {
    int dis = INT_MAX;
    if (c == 'S') {
        for (int j = 0; j < S_count; j++) {
            dis = min(dis, abs(S_coords[j] - i));
        }
    } else if (c == 'N') {
        for (int j = 0; j < N_count; j++) {
            dis = min(dis, abs(N_coords[j] - i));
        }
    }
    return dis;
}

int main() {
    cin >> T >> a >> b;

    // 입력 데이터 처리
    for (int i = 0; i < T; i++) {
        char alpha;
        int cood;
        cin >> alpha >> cood;
        if (alpha == 'S') {
            S_coords[S_count++] = cood; // 'S' 좌표 저장
        } else if (alpha == 'N') {
            N_coords[N_count++] = cood; // 'N' 좌표 저장
        }
    }

    // 범위 [a, b]에 대해 거리 비교
    for (int i = a; i <= b; i++) {
        int d1 = S_count > 0 ? Dis(i, 'S') : INT_MAX; // 'S'와의 거리
        int d2 = N_count > 0 ? Dis(i, 'N') : INT_MAX; // 'N'과의 거리

        if (d1 <= d2) cnt++;
    }

    // 결과 출력
    cout << cnt << endl;

    return 0;
}
