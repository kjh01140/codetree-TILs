#include <iostream>
using namespace std;
void Func (int &n){
    if(n<0) n *= -1;
}
int main() {
    int N;
    cin >> N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin >> arr[i];
        Func(arr[i]);
    }
    for(int i=0;i<N;i++){
        cout << arr[i] << " ";
        
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}