#include <iostream>
#include <cstring> // memset 사용
using namespace std;

int n;
int adjacent[1000];
int arr[1001];

void Func() {
    memset(arr, 0, sizeof(arr)); // arr 초기화

    // 첫 번째 세 숫자 결정
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int l = 1; l <= n; l++) {
                if (i == j || i == l || j == l) continue; // 서로 다른 숫자 조건
                if (i + j == adjacent[0] && j + l == adjacent[1]) {
                    arr[0] = i;
                    arr[1] = j;
                    arr[2] = l;
                    goto FillRemaining; // 초기 값 찾으면 나머지 처리로 이동
                }
            }
        }
    }

FillRemaining:
    // 나머지 값 계산
    for (int i = 3; i < n; i++) {
        arr[i] = adjacent[i - 1] - arr[i - 1];
        // 중복 또는 범위를 벗어나는 값이 나오면 처리
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j] || arr[i] < 1 || arr[i] > n) {
                cout << "No valid arrangement possible." << endl;
                return;
            }
        }
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n - 1; i++) {
        cin >> adjacent[i];
    }

    Func();

    // 결과 출력
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
