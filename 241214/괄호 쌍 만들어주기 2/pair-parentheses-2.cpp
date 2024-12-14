#include <iostream>
#include <string>
using namespace std;

int cnt = 0;

int main() {
    string A; cin >> A;
    int A_len = A.length();

    for(int i=0; i<A_len-1; i++){
        if(A[i] == '(' &&  A[i+1] == '('){
            for(int j=i+2; j<A_len-1; j++){
                if(A[j]==')' &&A[j+1]==')') cnt++;
            }
        }
    }

 
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}