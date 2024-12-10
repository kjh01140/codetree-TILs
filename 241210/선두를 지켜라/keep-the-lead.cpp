#include <iostream>
using namespace std;

#define Max_T 1000000

int Race(int a, int b) {
    if (a > b)
        return 1;  // A가 앞서면 1
    else if (a < b)
        return -1; // B가 앞서면 -1
    else
        return 0;  // 동점이면 0
}

int N, M;
int pos_A[Max_T + 1] = {0}, pos_B[Max_T + 1] = {0};

int main() {
    cin >> N >> M;

    int time_A = 1;
    for (int i = 0; i < N; i++) {
        int v, t;
        cin >> v >> t;
        while (t-- && time_A <= Max_T) { // 시간 범위 초과 방지
            pos_A[time_A] = pos_A[time_A - 1] + v; // 속도 적용
            time_A++;
        }
    }

    int time_B = 1;
    for (int i = 0; i < M; i++) {
        int v, t;
        cin >> v >> t;
        while (t-- && time_B <= Max_T) { // 시간 범위 초과 방지
            pos_B[time_B] = pos_B[time_B - 1] + v; // 속도 적용
            time_B++;
        }
    }

    int cnt = 0;
    int condition = Race(pos_A[1], pos_B[1]); // 첫 선두 결정

    for (int i = 2; i < min(time_A, time_B); i++) { // 두 레이스의 최대 시간만 탐색
        int new_condition = Race(pos_A[i], pos_B[i]);
        if (condition != new_condition && new_condition != 0) {
            cnt++; // 선두가 바뀔 때만 카운트
            condition = new_condition;
        }
    }

    cout << cnt;
    return 0;
}
