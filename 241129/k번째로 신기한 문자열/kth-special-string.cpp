#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    string T;
    cin >> n >> k >> T;

    int length = T.length(); // T의 길이
    string arr[n];           // 최대 n개의 문자열 저장
    int cnt = 0;             // 일치하는 문자열 개수 카운트

    for (int i = 0; i < n; i++) {
        string curr;
        cin >> curr;

        // curr의 앞부분이 T와 동일한지 확인
        if (curr.substr(0, length) == T) {
            arr[cnt++] = curr; // 조건 만족 시 배열에 추가
        }
    }

   

    // 배열 정렬
    sort(arr, arr + cnt);

    // k번째 문자열 출력
    cout << arr[k - 1] << endl;

    return 0;
}
