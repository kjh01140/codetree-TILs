#include <iostream>
using namespace std;
class Info{
    public:
        string date, week, weather;

        Info(string date, string week, string weather){
            this -> date = date;
            this -> week = week;
            this -> weather = weather;
        }
        Info () {}
};

int main() {
    int n;
    cin >> n;

    Info info[n];

    for(int i=0; i<n; i++){
        string date, week, weather;
        cin >> date >> week >> weather;
        info[i] = Info( date, week, weather);

    }
    for(int i=0; i<n; i++){
        
        if(info[i].weather == "Rain") {
            cout << info[i].date <<" ";
            cout << info[i].week <<" ";
            cout << info[i].weather;
            break;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}