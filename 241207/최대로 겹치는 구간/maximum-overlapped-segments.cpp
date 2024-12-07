#include <iostream>
using namespace std;

int main() {
    int n; cin >>n;
    int Lines[201] = {};

    int x1[100],x2[100];
    for(int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
        
        // OFFSET을 더해줍니다.
        x1[i] += 100;
        x2[i] += 100;
    }
    for(int i = 0; i < n; i++)
        for(int j = x1[i]; j < x2[i]; j++)
            Lines[j]++;


    int Max = Lines[0];
    for(int i=1; i<=200; i++){
        if(Max < Lines[i]) Max = Lines[i];
    }
    cout << Max;
    // 여기에 코드를 작성해주세요.
    return 0;
}