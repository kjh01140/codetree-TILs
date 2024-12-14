#include <iostream>
#include <algorithm>
using namespace std;
int ans = 0;

int main() {
    int n; cin >> n;
    int arr[n]={};

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        int sum = 0;
        
        for(int j=0; j<n; j++){
            if(j == i-1 || j == i+1|| i==j) continue;
            sum = arr[i] + arr[j];
            ans = max(ans, sum);
        }
        
        

        
    }

    cout << ans;
    // 여기에 코드를 작성해주세요.
    return 0;
}