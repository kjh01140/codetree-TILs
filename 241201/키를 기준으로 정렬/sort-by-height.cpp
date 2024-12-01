#include <iostream>
#include <algorithm>
using namespace std;

class Person{
    public:
        string name;
        int tall, weight;

        Person(string name, int tall, int weight){
            this -> name = name;
            this -> tall = tall;
            this -> weight = weight;
        }
         
        Person(){}
};

bool cmp(Person a, Person b){
    return a.tall < b.tall;
}

int main() {
    int n;
    cin >> n;
    Person people[n];
    for(int i=0; i<n; i++){
        string name;
        int tall, weight;
        cin >> name >> tall >> weight;
        people[i] = Person(name, tall, weight);
    }

    sort(people,people+n,cmp);

    for(int i=0; i<n; i++){
        cout << people[i].name << " ";
        cout << people[i].tall << " ";
        cout << people[i].weight << endl;
    }
    
    // 여기에 코드를 작성해주세요.
    return 0;
}