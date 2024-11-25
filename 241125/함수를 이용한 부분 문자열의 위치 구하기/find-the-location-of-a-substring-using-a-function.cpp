#include <iostream>
#include <string>
using namespace std;

int Func(string arr, string P){
    int L1=arr.length();
    int L2=P.length();

    for(int i=0;i<=L1-L2;i++){ //비교 시작점
        if(arr[i]==P[0]){
            int j;
            for( j=0;j<L2;j++){
                if(arr[i+j]!=P[j]) break;
            }
            if(j==L2) return i;
        }  
    }return -1;
    
}

int main() {
    string arr,P;
    cin >> arr;
    cin >> P;
    cout << Func(arr,P);
    // 여기에 코드를 작성해주세요.
    return 0;
}