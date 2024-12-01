#include <iostream>
#include <algorithm>
using namespace std;

class Student{
    public:
        string name, address, region;

        Student(string name, string address, string region){
            this->  name=  name;
            this-> address= address;
            this-> region= region;
        }

        bool operator<(const Student &other) const {
        return name < other.name; // 이름을 사전순으로 비교
    }

    Student () {}
};
int main() {
    int n;
    cin >> n;
    Student students[n];
    for(int i=0; i<n; i++){
        string name, address, region;
        cin >> name >> address >> region;
        students[i]=Student(name,address,region);
    }

    sort(students,students+n);
    cout << "name " << students[n-1].name <<endl;
    cout << "addr " << students[n-1].address<<endl;
    cout << "city " << students[n-1].region;
    // 여기에 코드를 작성해주세요.
    return 0;
}