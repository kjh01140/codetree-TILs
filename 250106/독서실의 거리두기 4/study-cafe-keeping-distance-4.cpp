#include <iostream>
#include <string>
#include <algorithm> // min, max 사용을 위해 포함

using namespace std;

int N;
string seat;
int max_dist = 0;

// 현재 배치에서 최소 거리 계산 함수
int Dist() {
    int dist = 100; // 충분히 큰 값으로 초기화
    int prev = -1;

    for(int i=0; i<N; i++){
        if(seat[i]=='1'){
            if(prev != -1){
                dist = min(dist, i - prev);
            }
            prev = i; 
        }
    }
    return dist;
}

int main() {
    cin >> N;      // 좌석 개수 입력
    cin >> seat;   // 좌석 상태 입력

    // 가능한 모든 빈 좌석 조합을 탐색
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            if (seat[i] == '0' && seat[j] == '0') {
                // 두 좌석을 임시로 채운다
                seat[i] = '1';
                seat[j] = '1';

                // 현재 배치에서 최소 거리를 계산
                max_dist = max(max_dist, Dist());

                // 복구
                seat[i] = '0';
                seat[j] = '0';
            }
        }
    }

    cout << max_dist; // 최종 결과 출력
    return 0;
}
