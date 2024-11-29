#include <iostream>
#include <string>
using namespace std;

class Secret {
    public: 
        string code;
        char location;
        int time;

        Secret(string code, char location, int time){
            this-> code = code;
            this-> location = location;
            this-> time = time;
        }
}; //;필요?

int main() {
    string code;
    char location;
    int time;

    // 입력 받기
    cin >> code >> location >> time;

    // Secret 객체 생성
    Secret secret(code, location, time);

   
    cout << "secret code : "<< secret.code << endl;
    cout << "meeting point : "<< secret.location<< endl;
    cout << "time : "<< secret.time<< endl;
    // 여기에 코드를 작성해주세요.
    return 0;
}