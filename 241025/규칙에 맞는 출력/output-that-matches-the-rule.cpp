#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=0; i<n ; i++){
        for(int j=0; j<i+1 ; j++){
            cout<< n-i+j << " ";
        }
        cout<<"\n";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}