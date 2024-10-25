#include <iostream>
using namespace std;

int main() {
    for(int i=1; i<=19; i++){
        for(int j=1; j<=19; j++){
            if(j==19){
                cout<< i << " * " << j <<" = "<< i*j << "\n";
            } else if(j%2==1){
                cout<< i << " * " << j <<" = "<< i*j << " / ";
            } else{
                cout<< i << " * " << j <<" = "<< i*j << "\n";
            }
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}