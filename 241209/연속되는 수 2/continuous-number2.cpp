#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int cnt=0;
    int temp= -1;
    int record=0;
    for(int i=0; i<N; i++){

        int n; cin >>n;
        if(i==0 || n == temp) {
            cnt++;
            if(record < cnt) record = cnt;
            temp = n;
        } else {
            cnt=1;
            temp = n;
        }
    }

    cout << record;
    // 여기에 코드를 작성해주세요.
    return 0;
}