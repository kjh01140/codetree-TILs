#include <iostream>
#include <algorithm>
#include <cstring> // memset 사용
using namespace std;

int n;
int adjacent[1000];
int arr[1001];

void Func() {
    memset(arr, 0, sizeof(arr)); // arr 초기화

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int l = 1; l <= n; l++) {

                for (int k = 0; k < n - 2; k+=3) {
                    // adjacent 조건 검사
                    if(k > n-1 || k+1 > n-1 || k+2 > n-1) break;

                    if (i + j == adjacent[k] && j + l == adjacent[k + 1]) {
                        bool valid = true;

                        // 이전 값들과 중복 확인
                        for (int p = 0; p < k; p++) {
                            if (arr[p] == i || arr[p] == j || arr[p] == l) {
                                valid = false;
                                break;
                            }
                        }

                        if (valid) {
                            arr[k] = i;
                            arr[k + 1] = j;
                            arr[k + 2] = l;
                        }
                    }
                }
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

    arr[n-3]=adjacent[n-4]-arr[n-4];
    arr[n-2]=adjacent[n-3]-arr[n-3];
    arr[n-1]=adjacent[n-2]-arr[n-2];
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
