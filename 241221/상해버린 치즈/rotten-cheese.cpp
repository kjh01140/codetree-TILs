#include <iostream>
#include <algorithm>
using namespace std;

int eat_record[1000][3] = {}; // 먹은 기록: [사람, 치즈, 시간]
int sick_time[50][2] = {};    // 아픈 기록: [사람, 아픈 시간]
int ans = 0;                  // 약의 최대 개수

int main() {
    // 입력받기
    int N, M, D, S;
    cin >> N >> M >> D >> S;

    for (int i = 1; i <= D; i++) 
        cin >> eat_record[i][0] >> eat_record[i][1] >> eat_record[i][2];

    for (int i = 1; i <= S; i++) 
        cin >> sick_time[i][0] >> sick_time[i][1];

    // 치즈 판단 로직
    for (int i = 1; i <= M; i++) { 
        bool is_possible_cheese = true; // 상한 치즈 가능 여부

        for (int k = 1; k <= S; k++) { // 아픈 기록 확인
            int person = sick_time[k][0];
            int time_sick = sick_time[k][1];
            bool ate_before_sick = false; // 아프기 전에 치즈를 먹었는지 여부

            for (int j = 1; j <= D; j++) {
                if (eat_record[j][1] == i && eat_record[j][0] == person) { // 특정 치즈를 먹었는지 확인
                    if (eat_record[j][2] < time_sick) { // 아프기 전에 먹음
                        ate_before_sick = true;
                    } else { // 아픈 시간 이후에 먹었으면 상한 치즈 가능성 배제
                        is_possible_cheese = false;
                        break;
                    }
                }
            }

            if (!ate_before_sick) { // 치즈를 아프기 전에 먹은 기록이 없으면 상한 치즈 불가능
                is_possible_cheese = false;
                break;
            }
        }

        // 상한 치즈라면 먹은 사람 수 계산
        if (is_possible_cheese) {
            int cnt = 0;
            for (int j = 1; j <= D; j++) {
                if (eat_record[j][1] == i) cnt++;
            }
            ans = max(ans, cnt); // 최대값 갱신
        }
    }

    // 결과 출력
    cout << ans;
    return 0;
}
