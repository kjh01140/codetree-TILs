#include <iostream>
#include <algorithm>
using namespace std;
int arr[101] = {0,};
int ans = 0;
int main() {
    int n, m; cin >> n >> m;
    for(int i=1; i<=n; i++) cin >> arr[i];

    for(int i=1; i<=n; i++){ // 시작위치
        int sum = 0;
        int start_idx = i;
        for(int j=0; j<m; j++){ // 움직임 횟수  
            sum+= arr[start_idx];
            start_idx = arr[start_idx];


        }

        ans = max(ans, sum);
    }
    cout << ans;
    // 여기에 코드를 작성해주세요.
    return 0;
}