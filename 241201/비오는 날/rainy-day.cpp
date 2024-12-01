#include <iostream>
#include <algorithm>
using namespace std;

class Info {
public:
    string date, week, weather;

    Info(string date, string week, string weather) {
        this->date = date;
        this->week = week;
        this->weather = weather;
    }

    Info() {} // 기본 생성자
};

// 비교 함수: 날짜 기준 오름차순 정렬
bool compare(const Info &a, const Info &b) {
    return a.date < b.date;
}

int main() {
    int n;
    cin >> n;

    Info rainInfos[100]; // 최대 100개의 데이터를 저장할 수 있는 정적 배열
    int count = 0;       // "Rain" 조건을 만족하는 데이터의 개수

    for (int i = 0; i < n; i++) {
        string date, week, weather;
        cin >> date >> week >> weather;

        if (weather == "Rain") {
            rainInfos[count] = Info(date, week, weather); // 배열에 직접 저장
            count++;
        }
    }

    if (count == 0) {
        // 조건에 맞는 데이터가 없을 경우
        cout << "No Rain data found." << endl;
    } else {
        // 정렬
        sort(rainInfos, rainInfos + count, compare);

        // 첫 번째 데이터 출력
        cout << rainInfos[0].date << " " << rainInfos[0].week << " " << rainInfos[0].weather << endl;
    }

    return 0;
}
