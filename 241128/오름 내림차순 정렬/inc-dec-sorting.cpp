#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } cout << endl;

    sort(arr,arr+n,greater<int>());
    
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}