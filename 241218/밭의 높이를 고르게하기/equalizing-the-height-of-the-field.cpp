#include <iostream>
#include <climits>
#include <cstdlib>
#include <algorithm>
using namespace std;
int arr[101] = {}; //0~100
int ans = INT_MAX;
int main() {
    int N, H, T; cin >> N >> H >> T;

    for(int i=0; i<N; i++) cin >> arr[i];

    for(int i=1; i<=100; i++){
        if(i+ T-1 <= 100){
            int sum = 0;
            for(int j=i; j<i+T; j++){
                sum+=abs(arr[j] - H);
            }
            ans = min(ans, sum);

        }
    }
    cout << ans;

    // 여기에 코드를 작성해주세요.
    return 0;
}