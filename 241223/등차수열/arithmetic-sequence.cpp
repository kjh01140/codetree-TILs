#include <iostream>
#include <algorithm>
using namespace std;
int arr[100] = {};
int ans = 0;
int main() {
    int n; cin >> n;

    for(int i=0; i<n; i++) cin >> arr[i];

    for(int k=2; k<100; k++){
        int cnt = 0;

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(k*2 == arr[i]+arr[j]) cnt++;
            }
        }
        ans = max(ans, cnt);
    }

    cout << ans;
    // 여기에 코드를 작성해주세요.
    return 0;
}