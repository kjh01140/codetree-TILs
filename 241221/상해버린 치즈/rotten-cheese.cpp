#include <iostream>
#include <algorithm>
using namespace std;

int eat_record[1000][3] = {};
int sick_time[50][2] = {};
int ans = 0;

int main() {
    int N, M, D, S;
    cin >> N >> M >> D >> S;

    for (int i = 1; i <= D; i++)
        cin >> eat_record[i][0] >> eat_record[i][1] >> eat_record[i][2]; // 사람p, 치즈m, 시간t

    for (int i = 1; i <= S; i++)
        cin >> sick_time[i][0] >> sick_time[i][1]; // 아픈사람p, 확실히 아픈 시간t

    for (int i = 1; i <= M; i++) { // 1번 치즈부터 M번 치즈까지 상했을 가능성을 판단
        bool is_possible_cheese = true;

        for (int k = 1; k <= S; k++) { // 각 아픈 사람 확인
            int person = sick_time[k][0];
            int time_sick = sick_time[k][1];
            bool ate_before_sick = false;

            for (int j = 1; j <= D; j++) { // 치즈를 먹은 기록 확인
                if (eat_record[j][1] == i && eat_record[j][0] == person) {
                    if (eat_record[j][2] < time_sick) { // 아프기 전에 먹은 기록이 있으면
                        ate_before_sick = true;
                    } else { // 아프기 후에 먹었다면 상한 치즈 불가능
                        is_possible_cheese = false;
                        break;
                    }
                }
            }

            if (!ate_before_sick) { // 아프기 전에 먹은 기록이 없다면 상한 치즈 불가능
                is_possible_cheese = false;
                break;
            }
        }

        if (is_possible_cheese) { // 가능한 치즈라면 먹은 사람 수 계산
            int cnt = 0;
            for (int j = 1; j <= D; j++) {
                if (eat_record[j][1] == i) cnt++;
            }
            ans = max(ans, cnt); // 최대값 갱신
        }
    }

    cout << ans;
    return 0;
}
