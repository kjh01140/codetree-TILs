#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr1[n],arr2[n];
    for (int i=0; i<n; i++){
        cin >> arr1[i];
    }
    for (int i=0; i<n; i++){
        cin >> arr2[i];
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+n);
    
    bool result=true;
    for(int i=0;i<n;i++){
        if(arr1[i] != arr2[i]){
            result = false;
            break;

        }
    }
    if(result){
        cout << "Yes";
    } else{
        cout << "No";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}