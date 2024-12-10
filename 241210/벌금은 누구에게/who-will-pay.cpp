#include <iostream>
using namespace std;

int main() {
    int N, M ,K;
    cin >> N >> M >> K;
    bool check = false;

    int students[N+1] = {}; //{0, 1번학생, 2번학생, ... ,N번 학생}

    for(int i=1; i<=M; i++){
        int num;
        cin >> num;
        students[num]++;

        for(int j=1; j<=i; j++){
        if(students[j]>=K) {
            check = true;
            cout << j; 
            break;
            }

        if(check) break;
        }

    }
    if(check = false) cout << -1;

 
    
    // 여기에 코드를 작성해주세요.
    return 0;
}