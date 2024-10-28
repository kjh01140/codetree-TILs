#include <iostream>
#include <climits>
using namespace std;

int main() {
    int N,idx=0;
    cin >> N;
    int arr[N];

    for(int i=0;i<N;i++){
        cin >> arr[i];
    }
    
    int max = arr[0];
    for(int i=1;i<N;i++){
        if(max<arr[i]){
            max=arr[i];
            idx=i;
        }
    }

    cout << max <<" ";
    arr[idx]=INT_MIN;

    max = arr[0];
    for(int i=1;i<N;i++){
        if(max<arr[i]){
            max=arr[i];
            
        }
    }
    cout << max ;


    // 여기에 코드를 작성해주세요.
    return 0;
}