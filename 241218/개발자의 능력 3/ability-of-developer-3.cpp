#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int ability[6] = {};
int ans = INT_MAX;

int Ans(int i, int j, int k){
    int sum1 = ability[i] + ability[j] + ability [k];
    int sum2 = 0;
    for(int x=0; x<6; x++){
        sum2+=ability[x];
    }
    return abs(sum2-sum1-sum1);
}

int main() {
    for(int i=0; i<6; i++) cin >> ability[i];

    for(int i=0; i<6-2; i++){
        for(int j=i+1; j<6-1; j++){
            for(int k=j+1; k<6; k++){
                ans = min(ans, Ans(i, j, k));
            }
        }
    }
    cout << ans;
    // 여기에 코드를 작성해주세요.
    return 0;
}