#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <climits>
using namespace std;
int arr[100] = {};
int total = 0; // 입력값들의 총합
int ans = INT_MAX;
int S, N; 

int main() {
    cin >> N >> S;
    for(int i=0; i<N; i++){
        cin >> arr[i];
        total += arr[i];
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if( i != j ) {
                int sum = total - arr[i] - arr[j];
                ans = min(ans, abs(S - sum));

            }
            
        }
    }

    cout << ans;

    // 여기에 코드를 작성해주세요.
    return 0;
}