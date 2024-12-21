#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int eat_record[1000][3]; // [사람, 치즈, 시간]
int sick_time[50][2];    // [사람, 아픈 시간]

int main() {
    int N, M, D, S;
    cin >> N >> M >> D >> S;

    for (int i = 0; i < D; i++) {
        cin >> eat_record[i][0] >> eat_record[i][1] >> eat_record[i][2];
    }

    for (int i = 0; i < S; i++) {
        cin >> sick_time[i][0] >> sick_time[i][1];
    }

    int max_people = 0; // 약이 필요한 최대 인원 수

    // 각 치즈를 순회하며 확인
    for (int cheese = 1; cheese <= M; cheese++) {
        bool is_possible = true; // 상한 가능성

        // 모든 아픈 사람에 대해 확인
        for (int s = 0; s < S; s++) {
            int sick_person = sick_time[s][0];
            int sick_time_s = sick_time[s][1];
            bool ate_before_sick = false;

            // 해당 아픈 사람이 치즈를 먹은 기록 확인
            for (int d = 0; d < D; d++) {
                if (eat_record[d][1] == cheese && eat_record[d][0] == sick_person) {
                    if (eat_record[d][2] < sick_time_s) {
                        ate_before_sick = true;
                    }
                }
            }

            // 아프기 전에 치즈를 먹은 기록이 없으면 불가능
            if (!ate_before_sick) {
                is_possible = false;
                break;
            }
        }

        if (is_possible) {
            // 가능한 치즈라면 먹은 사람 수 계산
            int count = 0;
            for (int d = 0; d < D; d++) {
                if (eat_record[d][1] == cheese) count++;
            }
            max_people = max(max_people, count);
        }
    }

    cout << max_people << endl;

    return 0;
}
