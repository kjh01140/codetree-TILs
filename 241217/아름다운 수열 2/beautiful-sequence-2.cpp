#include <iostream>
using namespace std;

const int MAX_SIZE = 100;
const int MAX_NUM = 100;

int A[MAX_SIZE] = {}; // 수열 A 저장
int B[MAX_SIZE] = {}; // 수열 B 저장
int N, M, cnt = 0;    // N: A의 크기, M: B의 크기, cnt: 결과 카운트

int Num_B[MAX_NUM + 1] = {0}; // B의 숫자 빈도 저장

// 시작점 idx에서 길이 M의 부분 수열이 B와 같은지 검사
bool Check(int idx) {
    int Num_A[MAX_NUM + 1] = {0}; // 부분 수열의 숫자 빈도 저장

    // A의 부분 수열 빈도 계산
    for (int i = 0; i < M; i++) {
        Num_A[A[idx + i]]++;
    }

    // B의 숫자 빈도와 비교
    for (int i = 0; i <= MAX_NUM; i++) {
        if (Num_A[i] != Num_B[i]) return false;
    }

    return true;
}

int main() {
    // 입력: N과 M
    cin >> N >> M;

    // 입력: 수열 A
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // 입력: 수열 B 및 숫자 빈도 계산
    for (int i = 0; i < M; i++) {
        cin >> B[i];
        Num_B[B[i]]++;
    }

    // A의 부분 수열 검사
    for (int i = 0; i <= N - M; i++) {
        if (Check(i)) cnt++;
    }

    // 출력: 결과 카운트
    cout << cnt;
    return 0;
}
