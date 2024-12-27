#include <iostream>
using namespace std;
int a[10] = {};
int b[10] = {};

int main() {
    int n; cin >> n;
    for(int i=0; i<n; i++) cin >> a[i] >> b[i];

    
    for(int j=a[0]; j<=b[0]; j++){
        if(j % 2 != 0) continue;
        int num = j;
        bool InRange = true;
        for(int k=1; k<n; k++){
            if( a[k] <= num*2 && b[k] >= num*2){
                num*=2;
            } else{
                InRange = false;
                break;
            }
        }
        if(InRange) {
            cout << j/2;
            return 0;
        }

    }

    // 여기에 코드를 작성해주세요.
    return 0;
}