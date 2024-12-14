#include <iostream>
#include <string>
using namespace std;

int cnt = 0;

int main() {
    string A; cin >> A;
    int A_len = A.length();

    for(int i=0; i<A_len; i++){
        if(A[i] == '('){
            for(int j=i+1; j<A_len; j++){
                if(A[j]==')') cnt++;
            }
        }
    }

 
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}