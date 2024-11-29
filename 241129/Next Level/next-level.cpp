#include <iostream>
#include <string>
using namespace std;

class Info{
    public:
    string id;
    int level;

        Info(string id="codetree",int level=10){
            this-> id = id;
            this-> level = level;
        }

};

int main() {
    string id;
    int level;
    cin >> id >> level;

    Info info1 = Info(), info2 = Info(id,level);

    cout << "user " << info1.id << " lv " << info1.level << endl;
    cout << "user " << info2.id << " lv " << info2.level << endl;

    // 여기에 코드를 작성해주세요.
    return 0;
}