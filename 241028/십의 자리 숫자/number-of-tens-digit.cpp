#include <iostream>
using namespace std;

int main() {
    int arr[10]={};
    for (int i=0; i<10; i++){
        int n;
        cin >> n;
        arr[n/10]++;
    }

    for (int i=1; i<10; i++){
        
        cout<< i<<" - "<<arr[i]<<"\n";
    }

    
    // 여기에 코드를 작성해주세요.
    return 0;
}