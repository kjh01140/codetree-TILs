#include <iostream>
#include <algorithm>
using namespace std;

class input_list {
public:
    int t, x, y;

    input_list(int t = 0, int x = 0, int y = 0) : t(t), x(x), y(y) {}
};

bool cmp(const input_list &a, const input_list &b) {
    return a.t < b.t;
}

int main() {
    int N, K, P, T; // N: 개발자 수, K: 전염 가능한 최대 악수 횟수, P: 초기 감염자 번호, T: 악수 정보 개수
    cin >> N >> K >> P >> T;

    bool infected[100] = {false}; // 각 개발자의 감염 상태를 저장
    int infection_count[100] = {0}; // 각 개발자가 전염시킨 횟수를 저장
    infected[P - 1] = true; // 초기 감염자 설정

    input_list inputs[250]; // 최대 T개의 악수 정보를 저장
    for (int i = 0; i < T; i++) {
        int t, x, y;
        cin >> t >> x >> y;
        inputs[i] = input_list(t, x - 1, y - 1); // 0-based index로 변환
    }

    sort(inputs, inputs + T, cmp); // 시간 순서대로 정렬

    for (int i = 0; i < T; i++) {
        int t = inputs[i].t; // 현재 시간
        int x = inputs[i].x; // x 개발자
        int y = inputs[i].y; // y 개발자

        // x가 감염 상태이고 전염 가능하면 y를 감염
        if (infected[x] && infection_count[x] < K) {
            infected[y] = true;
            infection_count[x]++;
        }

        // y가 감염 상태이고 전염 가능하면 x를 감염
        if (infected[y] && infection_count[y] < K) {
            infected[x] = true;
            infection_count[y]++;
        }
    }

    // 최종 감염 상태 출력
    for (int i = 0; i < N; i++) {
        cout << (infected[i] ? 1 : 0);
    }
    cout << endl;

    return 0;
}
