#include <iostream>
#include <algorithm>

#define MAX_N 1000

using namespace std;

int n,t;
int arr[MAX_N];

int main() {
    // 입력
    cin >> n >> t;
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    bool check = false;
    for(int i=0; i<n;i++){
        if(arr[i]>t) {
            check = true;
            break;
        }
    }
    
    // 연속하여 동일한 부호의 숫자가 나오는 횟수를 구해보며,
    // 그 중 최댓값을 갱신합니다.
    int ans = 0, cnt = 0;
    for(int i = 0; i < n; i++) {
		if(i>0 && arr[i-1]>t && arr[i]>t){
            cnt++;
        } else{
            cnt=1;
        }
        ans = max(ans, cnt);
    }

    

   if(check){
        cout << ans;
   } else{
        cout << 0;
   }
    
    return 0;
}