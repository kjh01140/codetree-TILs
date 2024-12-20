#include <iostream>
#include <algorithm>

using namespace std;
int arr[100][2] = {};
int ans = 0;

int main() {
    int N; cin >>N;

    for(int i=0; i<N; i++){
        cin >> arr[i][0] >> arr[i][1];
    }

    for(int i=0; i<N; i++){ //제외선정
        int time = 0;
        int time_arr[1000] = {};
        for(int j=0; j<N; j++){ //포함하는 구간
            if(i==j)continue;
            for(int k=arr[j][0]; k<arr[j][1]; k++){
                time_arr[k] = 1;
            }
        }
        for(int l=0; l<1000; l++){
            if(time_arr[l]==1) time++;
        }
        ans = max(ans, time);
    }
    cout << ans;
    // 여기에 코드를 작성해주세요.
    return 0;
}