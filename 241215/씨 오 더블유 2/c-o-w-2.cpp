#include <iostream>
using namespace std;
int cnt = 0;
int main() {
    int N; cin >>N; //문자열의 길이
    string str; cin >> str;

    for(int i=0; i<N; i++){ // finding C
        if(str[i]=='C'){

            for(int j=i+1; j<N; j++){
                if(str[j]=='O'){

                    for(int k=j+1; k<N; k++){
                        if(str[k]=='W'){
                            cnt++;
                        }
                    }
                }
            }

        }

    
    }
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}