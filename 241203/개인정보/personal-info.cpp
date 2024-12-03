#include <iostream>
#include <algorithm>
using namespace std;
class Student {
    public:
        string name;
        int height;
        float weight;

        Student (string name,int height,float weight){
            this-> name = name;
            this-> height = height;
            this-> weight = weight;
        }
        Student(){}
};
bool cmp_h(Student a, Student b){
    return a.name < b.name;
}
bool cmp_w(Student a, Student b){
    return a.height > b.height;
}

int main() {
    string name;
    int height;
    double weight;
    
    Student students[5];
    for(int i=0; i<5; i++){
        cin >> name >> height >> weight;
        students[i].name= name;
        students[i].height= height;
        students[i].weight= weight;
    }

    sort(students, students+5, cmp_h);
    cout << "name" << endl;
    for(int i=0; i<5; i++){
        cout << students[i].name << " ";
        cout << students[i].height << " ";
        cout << (double)students[i].weight << endl;
    }
    cout << endl;

    sort(students, students+5, cmp_w);
    cout << "height" << endl;
    for(int i=0; i<5; i++){
        cout << students[i].name << " ";
        cout << students[i].height << " ";
        cout << (double)students[i].weight << endl;
    }


    // 여기에 코드를 작성해주세요.
    return 0;
}