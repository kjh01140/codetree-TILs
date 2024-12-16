#include <iostream>
#include <algorithm>
using namespace std;
int arr[10000] = {};
int ans = 0;
int max_n = 0;

int main() {

    int N, K; cin >> N >> K;
    int max_n = 0;
    for(int i=0; i<N; i++){
        int n;
        char input; 
        cin >> n >> input;
         max_n = max(max_n, n);

        if(input == 'G'){
            arr[n] = 1;
        } else {
            arr[n] = 2;
        }
    }

    for(int i=0; i<= max_n-(K+1); i++){
        int sum = 0;
        for(int j=i; j <= i+K; j++){
            sum += arr[j];
        }
        ans = max(ans, sum);
    }

    cout << ans;
    // 여기에 코드를 작성해주세요.
    return 0;
}