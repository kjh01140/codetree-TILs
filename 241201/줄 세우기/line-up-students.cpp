#include <iostream>
#include <algorithm>

using namespace std;

class Student {
public:
    int tall, weight, number;

    // 매개변수가 있는 생성자
    Student(int tall, int weight, int number) {
        this->tall = tall;
        this->weight = weight;
        this->number = number;
    }

    // 기본 생성자 추가
    Student() {
        this->tall = 0;
        this->weight = 0;
        this->number = 0;
    }
};

bool cmp(Student a, Student b) {
    if(a.tall == b.tall) {
        return a.weight > b.weight; // 체중 기준 내림차순
    }
    return a.tall > b.tall; // 신장 기준 내림차순
}

int main() {
    int N;
    cin >> N;

    Student students[N]; // 기본 생성자 호출

    for(int i = 0; i < N; i++) {
        int tall, weight;
        cin >> tall >> weight;
        students[i] = Student(tall, weight, i + 1); // 번호는 i+1
    }

    sort(students, students + N, cmp); // 신장 및 체중 기준 내림차순 정렬

    // 정렬된 결과 출력 (신장, 체중, 번호)
    for(int i = 0; i < N; i++) {
        cout << students[i].tall << " ";  // 신장
        cout << students[i].weight << " ";  // 체중
        cout << students[i].number << endl; // 번호
    }

    return 0;
}
