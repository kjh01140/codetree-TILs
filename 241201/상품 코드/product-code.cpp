#include <iostream>
using namespace std;

class Product {
    public:
        string name;
        int code;

        Product(string name = "codetree", int code= 50){
            this -> name= name;
            this -> code= code;
        }
};

int main() {
    string name;
    int code;
    cin >> name >> code;

    Product product[2];

    product[1]=Product(name, code);

    cout << "product " << product[0].code << " is " << product[0].name << endl;
    cout << "product " << product[1].code << " is " << product[1].name;
    // 여기에 코드를 작성해주세요.
    return 0;
}