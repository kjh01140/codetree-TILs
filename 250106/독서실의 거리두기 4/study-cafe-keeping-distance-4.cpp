#include <iostream>
#include <string>
#include <algorithm> // min, max 사용

using namespace std;

int N;
string seat;
int max_min_dist = 0;

// 현재 배치에서 가장 가까운 두 사람 사이의 최소 거리 계산
int Dist() {
    int min_dist = 100; // 충분히 큰 값으로 초기화
    int prev = -1; // 이전 사람의 좌석 인덱스

    for (int i = 0; i < N; i++) {
        if (seat[i] == '1') {
            if (prev != -1) {
                // 이전 사람과 현재 사람 사이의 거리 계산
                min_dist = min(min_dist, i - prev);
            }
            prev = i; // 현재 사람을 이전 사람으로 업데이트
        }
    }

    return min_dist; // 가장 가까운 두 사람 사이의 최소 거리
}

int main() {
    cin >> N;      // 좌석 개수 입력
    cin >> seat;   // 좌석 상태 입력

    // 가능한 모든 빈 좌석 조합을 탐색
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (seat[i] == '0' && seat[j] == '0') {
                // 두 좌석에 사람을 배치
                seat[i] = '1';
                seat[j] = '1';

                // 현재 배치에서 가장 가까운 두 사람 간의 거리 계산
                max_min_dist = max(max_min_dist, Dist());

                // 좌석 상태 복구
                seat[i] = '0';
                seat[j] = '0';
            }
        }
    }

    cout << max_min_dist; // 결과 출력
    return 0;
}
