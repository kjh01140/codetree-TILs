#include <iostream>
#include <algorithm>
using namespace std;
class Person {
    public:
        string name;
        int height, weight;

        Person (string name, int height, int weight){
            this -> name = name;
            this -> height = height;
            this -> weight = weight;
        }

        Person(){}

};
bool cmp(Person a, Person b){
    if(a.height == b.height){
        return a.weight > b.weight;
    } return a.height < b. height;
}

int main() {
    int n; cin >> n;
    string name;
    int height, weight;

    Person people[n];
    for(int i=0; i<n; i++){
        cin >> people[i].name;
        cin >> people[i].weight;
        cin >> people[i].height;

    }

    sort(people, people + n, cmp);

    for(int i=0; i<n; i++){
        cout << people[i].name << " ";
        cout << people[i].weight<< " ";
        cout << people[i].height<< endl;

    }
    // 여기에 코드를 작성해주세요.
    return 0;
}