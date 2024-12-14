#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int ans = INT_MAX;


int main() {
    int N; cin >> N;

    int arr[N*2] = {};  // 4 7 8 6 4 4 7 8 6 4
    
    for(int i=0; i<N; i++){
        cin >> arr[i];
        arr[i+N] = arr[i];
    }


    for(int i=0; i<N; i++){
        int sum = 0;
        for(int j=1; j<=N-1; j++){
            sum += arr[i+j]*j;
        }
        ans = min(ans, sum);
    }

    cout << ans;
    // 여기에 코드를 작성해주세요.
    return 0;
}