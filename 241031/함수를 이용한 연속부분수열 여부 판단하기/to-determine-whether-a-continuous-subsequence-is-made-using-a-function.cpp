#include <iostream>
#include <string>
using namespace std;

bool Func(string A, string B){
    if(A.find(B) == string::npos){
        return false;
    } else{
        return true;
    }
}

int main() {
    int n1,n2;
    cin >> n1 >> n2;
    int A[n1],B[n2];

    for(int i=0; i<n1; i++ ){
        cin >> A[i];
    }
    for(int i=0; i<n2; i++ ){
        cin >> B[i];
    }

// 배열 A와 B를 문자열로 변환
    string strA = "", strB = "";
    for (int i = 0; i < n1; i++) {
        strA += to_string(A[i]);
    }
    for (int i = 0; i < n2; i++) {
        strB += to_string(B[i]);
    }



    if(Func(strA,strB)){
        cout << "Yes";
    } else{
        cout << "No";
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}