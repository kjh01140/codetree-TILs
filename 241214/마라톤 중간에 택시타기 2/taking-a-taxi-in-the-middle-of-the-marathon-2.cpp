#include <iostream>
#include <string.h>
#include <cstdlib>
#include <climits>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cin >> N;
    int ans = INT_MAX;
    int arr_x[N]={};
    int arr_y[N]={};

    for(int i=0; i<N; i++){
        cin >> arr_x[i] >> arr_y[i];
    }

    for(int i=1; i<N-1; i++){
        int sum = 0; // 임시길이
        int curr_x[N] = {}; 
        int curr_y[N] = {}; 
        
        copy(arr_x, arr_x + N, curr_x);
        copy(arr_y, arr_y + N, curr_y);

        curr_x[i] = curr_x[i-1];
        curr_y[i] = curr_y[i-1];

        for(int j=1; j<N; j++){
            sum += abs(curr_x[j] - curr_x[j-1]) + abs(curr_y[j] - curr_y[j-1]);
        }

        ans = min(ans, sum);


    }

    cout << ans;

    // 여기에 코드를 작성해주세요.
    return 0;
}