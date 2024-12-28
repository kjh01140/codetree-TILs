#include <iostream>
#include <algorithm>
using namespace std;
int ans = 1;
int arr[1000] = {};
int main() {
    int N, K; cin >> N >> K;

    for(int i=0; i<N; i++) cin >> arr[i];

    sort(arr, arr+N);

    for(int i=0; i<N; i++){ // 비교 시작 지점
        for(int j=1; j<N; j++){
            if(arr[j] - arr[i] <= K){
                // i~j 구간이 조건 만족
                int length = j - i + 1;
                ans = max(ans, length);
            } else {
                // arr가 정렬되어 있으므로
                // j 이후로는 더 큰 값만 나오니 차이가 더 벌어짐
                // => break로 j 루프 종료, i를 바꿔 다음으로 넘어감
                break;
            }
        }
    }

    cout << ans;
    // 여기에 코드를 작성해주세요.
    return 0;
}