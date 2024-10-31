#include <iostream>
using namespace std;

bool Func(int M, int D){
    if(M<1 || M >12) return false;

    if(M==2){
        if(D<=28) return true;
    }

    if(M<8){
        if(M%2==0){
            if(D<=30) return true;
        }else{
            if(D<=31) return true;
        }

    }else{
        if(M%2==0){
            if(D<=31) return true;
        }else{
            if(D<=30) return true;
        } 

    return false;
    }
}

int main() {
    int M,D;
    cin >> M >> D;
if(Func(M,D)){
    cout << "Yes";
} else {
    cout << "No";
}
    // 여기에 코드를 작성해주세요.
    return 0;
}