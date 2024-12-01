#include <iostream>
using namespace std;

class Member {
    public:
        char name;
        int score;

        Member(char name = ' ', int score = 0){
            this -> name = name;
            this -> score = score;
        }
};

int main() {
    Member member[5];

    for(int i=0; i<5; i++){
        char name;
        int score;
        cin >> name >> score;
        member[i]= Member(name, score);
    }

    
    int min =  member[0].score;
    int who=0;

    for(int i=1; i<5; i++){
        if (min > member[i].score) { // 더 작은 점수를 발견하면
            min = member[i].score;
            who = i; // 인덱스 업데이트
        }
        
    }
    cout << member[who].name << " " << member[who].score;   
    // 여기에 코드를 작성해주세요.
    return 0;
}