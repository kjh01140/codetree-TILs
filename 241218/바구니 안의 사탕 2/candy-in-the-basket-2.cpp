#include <iostream>
#include <algorithm>
using namespace std;
int arr[101]={0,};
int ans = 0;

int main() {
    int N, K; cin >> N >> K;
    int size = K*2 + 1; // 범위의 크기

    for(int i=0; i<N; i++){
        int n, idx;
        cin >> n >> idx;
        arr[idx] += n; // 같은 위치에 여러 바구니가 가능한 상황 반영
        
    } 

    for(int i=0; i<=101-size; i++){
        int sum = 0;
        for(int j=0; j<size; j++){
            sum += arr[i + j];
        }
        ans = max(ans, sum);
    }
    cout << ans;
    // 여기에 코드를 작성해주세요.
    return 0;
}