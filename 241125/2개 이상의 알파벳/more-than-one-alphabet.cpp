#include <iostream>
#include <string>
using namespace std;
bool Func(string A){
    int length=A.length();
    for(int i=0;i<length-1;i++){
        for(int j=i+1; j<length; j++){
            if(A[i]!=A[j]) return true;
        }
    }
    return false;
}

int main() {
    string A;
    cin >> A;
    
    if(Func(A)){
        cout << "Yes";
    }else{
        cout << "No";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}