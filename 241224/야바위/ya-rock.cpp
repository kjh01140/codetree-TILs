#include <iostream>
#include <algorithm>
using namespace std;

int Cup[4] = {0, 0, 0, 0};// 0번,,, 1번,2번,3번

int ans = 0;
int main() {
    int N; cin >> N;
    for(int i=1; i<=3; i++){ // i는 처음 조약돌을 넣은 위치
        int score = 0;
        int Cup[4] = {0, 0, 0, 0};// 0번,,, 1번,2번,3번
        Cup[i] = 1;

        for(int j=0; j<N; j++){
            int a, b, c; 
            cin >> a >> b >> c;

            int temp = Cup[b];
            Cup[b] = Cup[a];
            Cup[a] = temp;

            if(Cup[c] == 1) score++;
        }
        
        ans = max(ans , score);
    }

    cout << ans;
    // 여기에 코드를 작성해주세요.
    return 0;
}