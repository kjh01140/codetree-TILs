#include <iostream>
using namespace std;

int main() {
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;

    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string weeks[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

    // 두 날짜를 비교하여 앞뒤를 정리
    bool is_reverse = false;
    if (m1 > m2 || (m1 == m2 && d1 > d2)) {
        swap(m1, m2);
        swap(d1, d2);
        is_reverse = true;
    }

    // 두 날짜 간의 경과 일수를 계산
    int elapsed_days = 0;
    int month = m1, day = d1;

    while (true) {
        if (month == m2 && day == d2) break;

        day++;
        elapsed_days++;

        if (day > num_of_days[month]) {
            day = 1;
            month++;
        }
    }

    // 결과 출력 (역방향일 경우 음수로 계산)
    elapsed_days = is_reverse ? -elapsed_days : elapsed_days;

    // 시작 요일은 월요일(1)로 가정, 경과일에 따라 요일 계산
    cout << weeks[(1 + elapsed_days % 7 + 7) % 7] << endl;

    return 0;
}
