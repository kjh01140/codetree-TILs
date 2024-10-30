#include <iostream>
using namespace std;

void PrintNum (int n){
    int num=0;
    for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
            if(num==9) num=0;
            cout<<++num<<" ";
        }
        cout  << endl;

    }
}

int main() {
    int N;
    cin >> N;
    PrintNum(N);
    // 여기에 코드를 작성해주세요.
    return 0;
}