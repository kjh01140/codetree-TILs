#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
#define NMax 1000

class Coordinate {
    public:
    int x, y, num, dis;
    
    Coordinate(int x, int y, int num, int dis){
        this-> x=x;
        this-> y=y;
        this-> num = num;
        this-> dis = dis;
    }

    Coordinate(){}

};

bool cmp(Coordinate a, Coordinate b){
    if(a.dis == b.dis) return a.num < b.num;
    return a.dis < b.dis; 
}

Coordinate coo[NMax];

int main() {
    int N;
    cin >> N;
    for(int i=0; i<N; i++){
        int x, y, num, dis;
        cin >> x >> y;
        num = i+1;
        dis = abs(0-x) + abs(0-y);
        coo[i] = Coordinate(x, y, num, dis);
    }

    sort(coo, coo+N, cmp);

    for(int i=0 ; i<N; i++){
        cout << coo[i].num << endl;
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}