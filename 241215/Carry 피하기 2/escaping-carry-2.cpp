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

    // 짧은 문자열은 앞에 '0'을 추가
    while (a.length() < max_len) a = '0' + a;
    while (b.length() < max_len) b = '0' + b;
    while (c.length() < max_len) c = '0' + c;

    for (int i = max_len - 1; i >= 0; i--) {
        // 각 자리수의 합 계산
        int sum = (a[i] - '0') + (b[i] - '0') + (c[i] - '0');
        if (sum >= 10) return false; // 자리 올림이 발생하면 false
    }

    return true; // 모든 자리에서 올림이 없으면 true
}

int main() {
    int n;
    cin >> n; // 입력받을 문자열 개수
    string arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // 문자열 입력
    }

    int max_sum = 0;

    // 세 문자열을 선택하는 모든 조합 탐색
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                // Carry 조건이 만족되면
                if (Carry(arr[i], arr[j], arr[k])) {
                    // 문자열을 숫자로 변환해 합산
                    int sum = stoi(arr[i]) + stoi(arr[j]) + stoi(arr[k]);
                    max_sum = max(max_sum, sum); // 최대값 갱신
                }
            }
        }
    }

    cout << max_sum; // 최대 합 출력
    return 0;
}
