#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        for(int j=0; j<n; j++){
            if(j%2==0){
                if(i==0){
                    cout<< "* ";
                } else{
                    cout<< "  ";
                }
            } else{
                if(i<=j){
                    cout<< "* ";
                }else{
                    cout<< "  ";
                }
            }
        }
        cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}