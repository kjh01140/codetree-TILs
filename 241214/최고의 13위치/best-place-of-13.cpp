#include <iostream>
#include <algorithm>
using namespace std;

int max_cnt = 0;
int main() {
    int N; cin >> N;

    int arr[21][21]={0,};

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<N-2; j++){
            max_cnt = max(max_cnt, arr[i][j] + arr[i][j+1] + arr[i][j+2]);
        }
    }

    cout << max_cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}