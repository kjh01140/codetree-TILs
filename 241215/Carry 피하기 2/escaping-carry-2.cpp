#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// Carry 조건을 확인하는 함수
bool Carry(string a, string b, string c) {
    int a_len = a.length();
    int b_len = b.length();
    int c_len = c.length();
    int max_len = max({a_len, b_len, c_len});

    // 짧은 문자열 앞에 '0' 추가
    while (a.length() < max_len) a = '0' + a;
    while (b.length() < max_len) b = '0' + b;
    while (c.length() < max_len) c = '0' + c;

    // 각 자리 합이 10 이상인지 확인
    for (int i = max_len - 1; i >= 0; i--) {
        int sum = (a[i] - '0') + (b[i] - '0') + (c[i] - '0');
        if (sum >= 10) return false; // carry 발생
    }

    return true; // carry 발생 안함
}

int main() {
    int n;
    cin >> n; // 숫자 개수 입력
    string arr[n]; // 문자열 배열 사용

    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // 숫자 입력
    }

    int max_sum = -1; // 초기값 -1 설정

    // 세 숫자를 선택하는 모든 조합 탐색
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (Carry(arr[i], arr[j], arr[k])) {
                    // carry가 발생하지 않을 때만 합 계산
                    int sum = stoi(arr[i]) + stoi(arr[j]) + stoi(arr[k]);
                    max_sum = max(max_sum, sum); // 최대값 갱신
                }
            }
        }
    }

    cout << max_sum; // 결과 출력
    return 0;
}
