#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str1,str2;
    cin >> str1;
    cin >> str2;

    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    if(str1==str2){
        cout << "Yes";
    } else{
        cout << "No";
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}