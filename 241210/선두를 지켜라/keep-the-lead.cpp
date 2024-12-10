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

    int condition[Max_T]={0};
    for(int i=1; i<Max_T; i++){
        condition[i] = Race(pos_A[i],pos_B[i]);
    }


    int cnt = 0;
    int last_non_zero_condition = condition[1]; // 마지막 비동점 상태
    for (int i = 2; i < Max_T; i++) {
        if (condition[i] == 0) {
            // 동점 상태에서는 선두 변경 없음
            continue;
        }
        if (condition[i] != last_non_zero_condition) {
            // 비동점 상태가 달라졌을 때만 카운트
            cnt++;
            last_non_zero_condition = condition[i];
        }
    }

     cout << cnt;

    return 0;
}
