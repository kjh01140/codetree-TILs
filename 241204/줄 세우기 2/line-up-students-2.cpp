#include <iostream>
#include <algorithm>
using namespace std;
class Student{
    public:
        int height, weight, num;
        Student(int height =0, int weight =0, int num =0 ){
            this -> height = height;
            this -> weight = weight;
            this -> num = num;
        }
        
};
bool cmp(Student a, Student b){
    if(a.height == b.height) return a.weight > b.weight;
    return a.height < b.height;
}

int main() {
    int N;
    cin >> N;

    Student students[N];
    for(int i=0; i<N; i++){
         int height, weight ;
         cin >> height >> weight;
         students[i] = Student(height , weight, i+1);
        
    }
    sort(students,students+N,cmp);
    for(int i=0; i<N; i++){
        cout << students[i].height << " " << students[i].weight << " " <<students[i].num << endl;
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}