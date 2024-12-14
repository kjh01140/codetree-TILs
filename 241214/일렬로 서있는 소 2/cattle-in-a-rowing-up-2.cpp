#include <iostream>
using namespace std;
int cnt = 0;
int main() {
    int N; cin >> N;
    int arr[N];
    for(int i=0; i< N; i++){
        cin >> arr[i];
    }

    for(int i=0; i<N; i++){
        for(int j=i+1; j<N; j++){
            for(int k=j+1; k<N; k++){
                if(arr[i] < arr[j] && arr[j] < arr[k]) cnt ++;
            }
        }
    }
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}