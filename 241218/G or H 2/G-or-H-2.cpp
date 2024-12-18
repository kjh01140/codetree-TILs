#include <iostream>
#include <algorithm>
using namespace std;

int arr[101] = {0}; // 인덱스 0~100까지 사용 가능
int ans = 0;

int main() {
    int N;
    cin >> N;

    int minIdx = 101, maxIdx = -1;
    for (int i = 0; i < N; i++) {
        int idx;
        char c;
        cin >> idx >> c;
        if (c == 'G') {
            arr[idx] = 1; // G
        } else {
            arr[idx] = -1; // H
        }
        minIdx = min(minIdx, idx);
        maxIdx = max(maxIdx, idx);
    }

    // minIdx ~ maxIdx 범위 내에서만 검사
    for (int size = 1; size <= maxIdx - minIdx + 1; size++) {
        for (int i = minIdx; i + size - 1 <= maxIdx; i++) {
            int G_cnt = 0, H_cnt = 0;
            // 구간 [i, i+size-1]의 G/H 개수
            for (int j = i; j < i + size; j++) {
                if (arr[j] == 1) G_cnt++;
                else if (arr[j] == -1) H_cnt++;
            }

            // 구간 내 최소 1명이 있어야 하고
            // 모두 G이거나(H=0), 모두 H이거나(G=0), 혹은 G=H 일 때
            // 양 끝도 실제 사람이 있어야 함(arr[i], arr[i+size-1] != 0)
            if ((G_cnt + H_cnt) > 0 
                && (G_cnt == 0 || H_cnt == 0 || G_cnt == H_cnt) 
                && arr[i] != 0 && arr[i + size - 1] != 0) {

                // 사람 수가 size, 거리 = (마지막 인덱스 - 처음 인덱스)
                int length = (size == 1) ? 0 : (i + size - 1 - i);
                ans = max(ans, length);
            }
        }
    }

    cout << ans << endl;
    return 0;
}
