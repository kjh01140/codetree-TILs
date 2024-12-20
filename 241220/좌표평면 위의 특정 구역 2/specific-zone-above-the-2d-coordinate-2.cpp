#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
int arr[100][2] = {};
int ans = INT_MAX;

int main() {
    int N; cin >> N;
    for(int i=0; i<N; i++){
        for(int j=0; j<2; j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<N; i++){ // 제외하는 점

            int delete_arr[100][2] = {};
            int min_x = 40000 , min_y = 40000;
            int max_x = 0 , max_y = 0;

        for(int j=0; j<N; j++){ // 살리는 점
            if(i == j) continue;

            min_x = min(min_x, arr[j][0]);
            min_y = min(min_y, arr[j][1]);
            max_x = max(max_x, arr[j][0]);
            max_y = max(max_y, arr[j][1]);

            
        }
        ans = min(ans, (max_x-min_x)*(max_y-min_y) );
    }
    cout << ans;
    
    // 여기에 코드를 작성해주세요.
    return 0;
}