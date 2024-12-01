#include <iostream>
#include <algorithm>
using namespace std;

class Person{
    public:
        string name;
        int kor, eng, math;

        Person(string name,int kor,int  eng, int math){
            this -> name = name;
            this -> kor = kor;
            this -> eng = eng;
            this ->  math=  math;
        }
         
        Person(){}
};

bool cmp(Person a, Person b){
    if(a.kor == b.kor){
        if(a.eng== b.eng){
            return a.math > b.math;
        } return a.eng > b.eng;
    } return a.kor > b.kor;
}

int main() {
    int n;
    cin >> n;
    Person people[n];
    for(int i=0; i<n; i++){
        string name;
        int kor, eng, math;
        cin >> name >> kor >> eng >> math;
        people[i] = Person(name, kor, eng, math);
    }

    sort(people,people+n,cmp);

    for(int i=0; i<n; i++){
        cout << people[i].name << " ";
        cout << people[i].kor << " ";
        cout << people[i].eng << " ";
        cout << people[i].math << endl;
    }
    
    // 여기에 코드를 작성해주세요.
    return 0;
}