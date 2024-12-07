#include <iostream>
using namespace std;

int main() {
    int N, k;
    cin >> N >> k;

    int Stacks[N]={};
    for(int i=0; i<k; i++){
        int A,B; cin >> A >> B;
        for(int j=A; j<=B; j++){
            Stacks[j]++;
        }
    }

    int Max = Stacks[0];
    for(int i=1; i<N; i++){
        if(Max < Stacks[i]) Max = Stacks[i];
    }

    cout << Max;

    // 여기에 코드를 작성해주세요.
    return 0;
}