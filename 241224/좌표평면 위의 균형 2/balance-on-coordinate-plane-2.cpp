#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;
int arr_x[100] = {};
int arr_y[100] = {};
int N;

int FourDiff(int x, int y){
    int quadrant1 = 0;
    int quadrant2 = 0;
    int quadrant3 = 0;
    int quadrant4 = 0;
    for(int i=0; i<N; i++){
        if(arr_x[i] > x && arr_y[i] > y ) quadrant1++;
        else if(arr_x[i] > x && arr_y[i] < y )quadrant2++;
        else if(arr_x[i] < x && arr_y[i] < y )quadrant3++;
        else if(arr_x[i] < x && arr_y[i] > y )quadrant4++;
    }

    return max({quadrant1, quadrant2, quadrant3, quadrant4});
    
}

int main() {
     cin >> N;
    for(int i=0; i<N; i++) cin >> arr_x[i] >> arr_y[i];
    int ans = INT_MAX;
    for(int i=0; i<=100; i+=2){
        for(int j=0; j<=100; j+=2){
            ans = min(ans,FourDiff(i,j));
        }
    }

    cout << ans;
    // 여기에 코드를 작성해주세요.
    return 0;
}