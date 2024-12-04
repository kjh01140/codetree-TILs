#include <iostream>
using namespace std;

int main() {
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;
    int elasped_days = 1; // 직접 시뮬레이션으로 풀이함
    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int month = m1, day = d1;

    while(true){
        if(month==m2 && day==d2) break;

        elasped_days++;
        day++;

        if(day > num_of_days[month]){
            month++;
            day=1;
        }

    }
    cout << elasped_days;
    // 여기에 코드를 작성해주세요.
    return 0;
}