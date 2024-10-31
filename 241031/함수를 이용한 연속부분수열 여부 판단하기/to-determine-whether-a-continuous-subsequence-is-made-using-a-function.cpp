#include <iostream>
#include <string>
using namespace std;

bool Func(int A[], int B[], int n1, int n2) {
    if (n2 > n1) return false; // 부분 배열이 더 길면 바로 false 반환

    for (int i = 0; i <= n1 - n2; i++) {
        bool found = true;
        for (int j = 0; j < n2; j++) {
            if (A[i + j] != B[j]) {
                found = false;
                break;
            }
        }
        if (found) return true;
    }
    return false;
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    int A[n1], B[n2];

    for (int i = 0; i < n1; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < n2; i++) {
        cin >> B[i];
    }

    if (Func(A, B, n1, n2)) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}