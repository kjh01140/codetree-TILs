#include <iostream>
#include <algorithm>
using namespace std;
int H[100] = {};
int ans = 0;
int main() {
    int N; cin >> N;

    for(int i=0; i<N; i++){
        cin >> H[i];
    }

    for(int i=0; i<=1000; i++){ //해수면의 높이
        int cnt = 0;
        for(int j=0; j<N; j++){ // 빙산 번호
            if( (j==0 && H[j]-i > 0) ||( H[j-1]-i <= 0 && H[j]-i >0)){
                cnt++;
            } else {
                continue;
            }

        }
        ans = max(ans, cnt);
    }
    cout << ans;
    // 여기에 코드를 작성해주세요.
    return 0;
}