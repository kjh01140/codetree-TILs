#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <climits>
using namespace std;

int arr[101] = {};

int main() {
    int n; cin >> n;
    for(int i=0; i<n; i++ ){
        cin >> arr[i];
    }

    int min_sum = INT_MAX;
    int sum = 0;
    for(int i=0; i<n; i++){ // 모이는 장소
        for(int j=0; j<n; j++){ // 그 외의 장소에서 출발 위치
            if(j == i) continue;
            sum += arr[j]*abs(j-i); // 사람수 * |거리|
            
        }
        min_sum = min(min_sum, sum);
        sum = 0;
    }

    cout << min_sum;


    // 여기에 코드를 작성해주세요.
    return 0;
}