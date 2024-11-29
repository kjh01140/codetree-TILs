#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    int arr[N*2];
    for(int i=0; i<N*2; i++){
        cin >> arr[i];
    }
    sort(arr,arr+N*2);

    int N_arr[N];
    for(int i=0;i<N;i++){
        N_arr[i] = arr[i]+arr[N*2-1-i];
    }
    sort(N_arr,N_arr+N);

    cout << N_arr[N-1];
    // 여기에 코드를 작성해주세요.
    return 0;
}