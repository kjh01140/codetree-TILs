#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a>> b>> c;
    int date = 11, hour = 11, minute = 11;
    

    int minutes_1 = 11*24*60 + 11*60 +11;
    int minutes_2 = a*24*60 + b*60 +c;
    if(minutes_2 - minutes_1 < 0){
        cout << -1;
    } else{
        cout << minutes_2 - minutes_1;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}