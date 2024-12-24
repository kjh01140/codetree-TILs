#include <iostream>
#include <algorithm>
using namespace std;

int Cup[4] = {0, 0, 0, 0};// 0번,,, 1번,2번,3번
int arr[100][3]={};

int ans = 0;
int main() {
    int N; cin >> N;

    for(int i=0; i<N; i++){
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }

    for(int i=1; i<=3; i++){ // i는 처음 조약돌을 넣은 위치
        int score = 0;
        int Cup[4] = {0, 0, 0, 0};// 0번,,, 1번,2번,3번
        Cup[i] = 1;

        for(int j=0; j<N; j++){ //N번 시행
            int temp = Cup[arr[j][1]];
            Cup[arr[j][1]] = Cup[arr[j][0]];
            Cup[arr[j][0]] = temp;

            if(Cup[arr[j][2]] == 1) score++;
        }
        
        ans = max(ans , score);

    }

    cout << ans;
    // 여기에 코드를 작성해주세요.
    return 0;
}