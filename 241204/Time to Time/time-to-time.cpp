#include <iostream>
using namespace std;

int main() {
    int a,b,c,d;
    cin >> a >> b >>c >> d;
    int elapsed_time=0;

    int time1 = a*60 + b;
    int time2 = c*60 + d;

    cout << time2 - time1;
    // 여기에 코드를 작성해주세요.
    return 0;
}