#include <iostream>
#include <string>

#include <algorithm>
using namespace std;

int max_ans = 0; //최종 최대값

int main() {
    string a; cin >> a; //2진법 입력
    int a_len = a.length(); // 2진법 길이

    for(int i=0; i<a_len; i++ ){
        int sum = 0; //임시비교
        string temp = a; //a는 고정

        if(temp[i] == '0'){
            temp[i] = '1';
        }  else{
            temp[i] = '0';
        }

        for(int j=0; j<a_len; j++){
            sum = sum*2 + (temp[j]-'0');
        }
        
        max_ans = max(max_ans, sum);


    }

    cout << max_ans;
    
    // 여기에 코드를 작성해주세요.
    return 0;
}