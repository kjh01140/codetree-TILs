#include <iostream>
using namespace std;

int main() {
    int n,arr[100],cnt=0;
    cin >> n;

    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        if(a%2==0){
            arr[cnt]= a;
            cnt++;
        }

    }
    for(int i= cnt-1; i>=0; i--){
        cout<< arr[i] << " ";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}