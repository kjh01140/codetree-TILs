#include <iostream>
#include <cstdlib>
using namespace std;

int arr[100][2] = {};
int ans = 0;
int main() {
    int N; cin >> N;    
    for(int i=0; i<N; i++){
        cin >> arr[i][0] >> arr[i][1];
    }

    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if(i==j)continue;

            for(int k=0; k<N; k++){
                if(k==i || k==j) continue;
                if(arr[i][0] == arr[k][0] || arr[j][1] == arr[k][1]){
                    ans = (arr[i][0]*arr[j][1] + arr[j][0]*arr[k][1] + arr[k][0]*arr[i][1]) - (arr[j][0]*arr[i][1] + arr[k][0]*arr[j][1] +arr[i][0]*arr[k][1]);
                }
            }
        }
    }
    cout << abs(ans);
    return 0;
}