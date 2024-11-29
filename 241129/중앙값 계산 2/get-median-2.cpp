#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int FindMiddle(int arr[], int cnt){ // 배열이름,현재위치(1부터)
    sort(arr,arr+cnt);
    return arr[(1+cnt)/2-1];
}

int main() {
    int n; cin >>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++){
        if(i%2==0){
            cout << FindMiddle(arr,i+1) << " ";
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}