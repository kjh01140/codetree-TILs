#include <iostream>
#include <algorithm>

using namespace std;

class Student {
    public:
        int tall, weight, number;

        Student(int tall, int weight, int number) {
            this->tall = tall;
            this->weight = weight;
            this->number = number;
        }

        Student(){}
};

bool cmp(Student a, Student b) { // 국어점수 기준 내림차순
    if(a.tall == b.tall){
        return a.weight > b.weight;
    } return a.tall > b.tall;
}

int main() {
    int N;
    cin >> N;
    Student students[N];
    for(int i=0; i<N; i++){
        int tall, weight;
        cin >> tall >> weight;
        students[i] = Student(tall, weight, i+1);

    } 

    sort(students, students + N, cmp); // 국어 점수 기준 내림차순 정렬

    // 정렬 이후 등수별 학생 번호 출력
    for(int i = 0; i < N; i++){
        cout << students[i].tall << " ";
        cout << students[i].weight << " ";
        cout << students[i].number << endl;
    }

    return 0;
}


