#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int x[100]={};
int y[100]={};
int ans = INT_MAX;
int main() {
    int n; cin >> n;
    for(int i=0; i<n; i++){
        cin >> x[i] >> y[i];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == j)continue;

            ans = min(ans, (x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
        }
    }
    cout << ans;
    // 여기에 코드를 작성해주세요.
    return 0;
}