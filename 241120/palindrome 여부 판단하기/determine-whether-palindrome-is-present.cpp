#include <iostream>
#include <string>
using namespace std;

// 회문 여부를 확인하는 함수 (기존 코드 유지)
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
    int length = 0;  // 입력된 문자열의 개수
    string arr[101]; // 문자열 배열

    
    // 문자열 입력 받기
    for (int i = 0; i < 100; i++) {
        cin >> arr[i];
        if (arr[i] == "END") { // 종료 키워드 "END"를 만나면 입력 종료
            length = i;        // 입력된 문자열의 개수를 저장
            break;
        }
    }

    // CheckP 함수 호출
    if (CheckP(arr, length)) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}
