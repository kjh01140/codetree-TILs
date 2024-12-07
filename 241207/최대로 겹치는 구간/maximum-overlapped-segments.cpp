#include <iostream>
using namespace std;

int main() {
    int n; cin >>n;
    int Lines[201] = {};

    for(int i=0; i<n; i++){
        int x1,x2; cin >> x1 >> x2;
        for(int j=x1; j<x2; j++){
            Lines[j+100]++;
        }
    }

    int Max =0;
    for(int i=0; i<=201; i++){
        if(Max < Lines[i]) Max = Lines[i];
    }
    cout << Max;
    // 여기에 코드를 작성해주세요.
    return 0;
}