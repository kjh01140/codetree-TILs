#include <iostream>

using namespace std;

class Student{
    public:
        string name, address, region;

        Student(string name, string address, string region){
            this->  name=  name;
            this-> address= address;
            this-> region= region;
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

    int idx=0;
    for(int i=1;i<n;i++){
        if(students[i].name>students[idx].name){
            idx=i;
        }
    }

    cout << "name " << students[idx].name <<endl;
    cout << "addr " << students[idx].address<<endl;
    cout << "city " << students[idx].region;
    // 여기에 코드를 작성해주세요.
    return 0;
}