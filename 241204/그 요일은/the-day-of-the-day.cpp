#include <iostream>
using namespace std;

int main() {
    int m1, d1, m2, d2,cnt=0;
    string A;
    cin >> m1 >> d1 >> m2 >> d2;
    cin >> A;

    int num_of_days[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string weeks[7] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};

    

    // 두 날짜 간의 경과 일수를 계산
    int elapsed_days = 0;
    int month = m1, day = d1;

    while (true) {
        if (day > num_of_days[month]) {
            day = 1;
            month++;
        }
        
        if (month == m2 && day == d2) {
            elapsed_days++;
            break;
        }
        day++;
        elapsed_days++;

        
    }

    for(int i=0; i<=elapsed_days;i++){
        if(weeks[(1+i%7)%7]==A){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
