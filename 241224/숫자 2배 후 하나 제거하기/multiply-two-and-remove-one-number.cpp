#include <iostream>
#include <climits>
#include <cstdlib>
#include <algorithm>
using namespace std;

int arr[100] = {};

int main() {
    int min_diff = INT_MAX;
    int N; cin >> N;

    for(int i=0; i<N; i++) cin >> arr[i];

    for(int i = 0; i < N; i++) {
        arr[i] *= 2;
    
        for(int j = 0; j < N; j++) {
            int remaining_arr[N-1] = {};
            int cnt = 0;
            for(int k = 0; k < N; k++)
                if(k != j)
                    remaining_arr[cnt++] = arr[k];
    
            int sum_diff = 0;
            for(int k = 0; k < N - 2; k++)
                sum_diff += abs(remaining_arr[k + 1] - remaining_arr[k]);
    
            min_diff = min(min_diff, sum_diff);
        }
    
        arr[i] /= 2;
    }
    
    cout << min_diff;
    
    return 0;
}

