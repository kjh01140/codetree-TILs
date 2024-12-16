#include <iostream>
#include <algorithm>
using namespace std;
int arr[100];
int ans = 0;
int main() {
    int n, k; cin >> n >> k;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<= n-k; i++){
        int sum = 0;
        for(int j=i; j<i+k; j++){
            sum+= arr[j];
        }
        ans = max(ans, sum);
    }
    cout << ans;
    // 여기에 코드를 작성해주세요.
    return 0;
}