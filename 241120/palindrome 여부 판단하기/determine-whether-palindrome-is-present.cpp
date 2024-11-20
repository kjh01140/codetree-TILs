#include <iostream>
#include <string>
using namespace std;

// 회문 여부를 확인하는 함수 (수정 없음)
bool CheckP(string *s, int length) {
    for (int i = 0; i < length; i++) {
        if (*(s + i) == *(s + length - 1 - i)) {
            continue;
        } else {
            return false;
        }
    }
    return true;
}

int main() {
    string input;    // 전체 입력 문자열
    
    cin >> input;    // 공백 없이 한 줄 입력

    string arr[100]; // 문자 배열로 변환
    int length = input.length(); // 입력 문자열 길이

    // 문자열을 문자 단위로 배열에 저장
    for (int i = 0; i < length; i++) {
        arr[i] = input[i];
    }

    // CheckP 함수 호출
    if (CheckP(arr, length)) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}
