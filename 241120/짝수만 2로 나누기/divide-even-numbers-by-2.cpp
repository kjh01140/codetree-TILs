#include <iostream>
using namespace std;

void Func(int N, int *x){
    for(int i=0;i<N;i++){
        if(x[i]%2==0){
            x[i]/=2;
        }
    }
}

int main() {
    int N;
    cin >> N;
    int arr[N];
    for(int i=0; i<N; i++){
        
        cin >> arr[i];
    }
    
    Func(N, arr);

    for(int i=0; i<N; i++){
        cout << arr[i] << " ";
    }
    
    
    // 여기에 코드를 작성해주세요.
    return 0;
}