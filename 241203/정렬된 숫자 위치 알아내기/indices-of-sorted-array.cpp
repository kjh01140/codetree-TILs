#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Data {
public:
    int input, output, idx;
    Data(int input, int output, int idx)
        : input(input), output(output), idx(idx) {}
};

bool cmp(const Data& a, const Data& b) {
    return a.input < b.input;
}

bool cmp2(const Data& a, const Data& b) {
    return a.output < b.output;
}

int main() {
    int n;
    cin >> n;
    vector<Data> datas;

    // 데이터 입력
    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;
        datas.emplace_back(input, i + 1, 0);
    }

    // 첫 번째 정렬: input 기준
    sort(datas.begin(), datas.end(), cmp);

    // 인덱스 설정
    for (int i = 0; i < n; i++) {
        datas[i].idx = i + 1;
    }

    // 두 번째 정렬: output 기준
    sort(datas.begin(), datas.end(), cmp2);

    // 결과 출력
    for (const auto& data : datas) {
        cout << data.idx << " ";
    }

    return 0;
}
