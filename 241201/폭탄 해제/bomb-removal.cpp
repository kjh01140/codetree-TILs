#include <iostream>
using namespace std;

class Solve{
    public:
        string code;
        char color;
        int second;

        Solve(string code, char color, int second){
            this -> code = code;
            this -> color = color;
            this -> second = second;
        }
        Solve() {}
};

int main() {
    string code;
    char color;
    int second;
    cin >> code >> color >> second ; 
    Solve solve(code, color, second);

    cout << "code : " << solve.code << endl;
    cout << "color : " << solve.color << endl;
    cout << "second : " << solve.second;
    // 여기에 코드를 작성해주세요.
    return 0;
}