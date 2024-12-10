#include <iostream>
using namespace std;

#define Max_T 1000000

int Race(int a, int b) {
    if (a > b)
        return 1;  // A가 앞섬
    else if (a < b)
        return -1; // B가 앞섬
    else
        return 0;  // 동점
}

int N, M;
int pos_A[Max_T + 1] = {0}, pos_B[Max_T + 1] = {0};
int condition[Max_T] = {0}; // 시간별 선두 상태 저장

int main() {
    cin >> N >> M;

    // A의 위치 계산
    int time_A = 1;
    for (int i = 0; i < N; i++) {
        int v, t;
        cin >> v >> t;
        while (t--) {
            pos_A[time_A] = pos_A[time_A - 1] + v;
            time_A++;
        }
    }

    // B의 위치 계산
    int time_B = 1;
    for (int i = 0; i < M; i++) {
        int v, t;
        cin >> v >> t;
        while (t--) {
            pos_B[time_B] = pos_B[time_B - 1] + v;
            time_B++;
        }
    }

    // 시간별 선두 상태 기록
    for (int i = 1; i < time_A; i++) {
        condition[i] = Race(pos_A[i], pos_B[i]);
    }

    /* 선두 변경 횟수 계산
    int cnt = 0;
    int last_non_zero_condition = condition[1]; // 마지막 비동점 상태
    for (int i = 2; i < time_A; i++) {
        if (condition[i] == 0) {
            // 동점 상태에서는 선두 변경 없음
            continue;
        }
        if (condition[i] != last_non_zero_condition) {
            // 비동점 상태가 달라졌을 때만 카운트
            cnt++;
            last_non_zero_condition = condition[i];
        }
    }*/

    int leader = 0, cnt = 0;
    for(int i = 1; i < time_A; i++){
        if(Race(pos_A[i],pos_B[i]) == 1){
            if(leader == -1) cnt++;

            leader = 1;
        } else if(Race(pos_A[i],pos_B[i]) == -1){
            if(leader == 1) cnt++;
            
            leader = -1; 
        }
    }
    

    cout << cnt;
    return 0;
}
