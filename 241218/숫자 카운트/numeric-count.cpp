#include <iostream>
using namespace std;

int N;
int B[11], Cnt1[11], Cnt2[11];

int Check_cnt1 (int i, int j, int k, int B_, int cnt1_) {
    int B1 = B_ / 100;
    int B2 = (B_ / 10) % 10;
    int B3 = B_ % 10;

    int check_cnt1 = 0;
    if (i == B1) check_cnt1++;
    if (j == B2) check_cnt1++;
    if (k == B3) check_cnt1++;

    return (check_cnt1 == cnt1_);
}

int Check_cnt2 (int i, int j, int k, int B_, int cnt2_) {
    int B1 = B_ / 100;
    int B2 = (B_ / 10) % 10;
    int B3 = B_ % 10;

    // 1번 카운트 (정확 일치)
    int exact_count = 0;
    if (i == B1) exact_count++;
    if (j == B2) exact_count++;
    if (k == B3) exact_count++;

    // 전체 매칭(숫자가 존재하기만 하면)
    int total_matches = 0;
    if (i == B1 || i == B2 || i == B3) total_matches++;
    if (j == B1 || j == B2 || j == B3) total_matches++;
    if (k == B1 || k == B2 || k == B3) total_matches++;

    // 2번 카운트 = 전체 매칭 - 정확 일치
    int check_cnt2 = total_matches - exact_count;

    return (check_cnt2 == cnt2_);
}

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> B[i] >> Cnt1[i] >> Cnt2[i];
    }

    int answer = 0;
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            if (i == j) continue;
            for (int k = 1; k <= 9; k++) {
                if (k == i || k == j) continue;

                bool possible = true;
                for (int l = 0; l < N; l++) {
                    if (!(Check_cnt1(i, j, k, B[l], Cnt1[l]) && Check_cnt2(i, j, k, B[l], Cnt2[l]))) {
                        possible = false;
                        break;
                    }
                }

                if (possible) answer++;
            }
        }
    }

    cout << answer << "\n";
    return 0;
}
