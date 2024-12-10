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

int main() {
    cin >> N >> M;

    // A의 위치 계산
    int time_A = 1;
    for (int i = 0; i < N; i++) {
        int v, t;
        cin >> v >> t;
        while (t-- && time_A <= Max_T) {
            pos_A[time_A] = pos_A[time_A - 1] + v;
            time_A++;
        }
    }

    // B의 위치 계산
    int time_B = 1;
    for (int i = 0; i < M; i++) {
        int v, t;
        cin >> v >> t;
        while (t-- && time_B <= Max_T) {
            pos_B[time_B] = pos_B[time_B - 1] + v;
            time_B++;
        }
    }

    // 선두 변경 횟수 계산
    int cnt = 0;
    int condition = Race(pos_A[1], pos_B[1]); // 첫 상태 저장

    for (int i = 2; i < min(time_A, time_B); i++) {
        int new_condition = Race(pos_A[i], pos_B[i]);

        // 선두가 변경되는 경우만 카운트
        if (new_condition != condition && new_condition != 0) {
            cnt++;
            condition = new_condition; // 새로운 상태 저장
        }
    }

    cout << cnt;
    return 0;
}
