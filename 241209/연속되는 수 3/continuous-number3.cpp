#include <iostream>
#include <algorithm>
using namespace std;

#define MAX_N 1000
int arr[MAX_N];


int main() {
    int N; cin >> N;

    for(int i=0; i<N; i++){
        cin >> arr[i];
    }

    int ans = 0, cnt = 0;

    for(int i=1; i<N; i++){
        if(arr[i-1]*arr[i]>0){
            cnt++;
        } else{
            cnt =1;
        }

        ans = max(ans, cnt);
    }

    cout << ans;
    // 여기에 코드를 작성해주세요.
    return 0;
}