#include <iostream>
using namespace std;

int main() {
    int sum=0,cnt=0;
    double avg;

    for(int i=0; i<10; i++){
        int n;
        cin >> n;

        if(n>=250) break;

        sum+=n;
        cnt++;

        
    }
    cout << fixed;
    cout.precision(1);
    cout<< sum << " " << (double)sum/cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}