#include <iostream>
#include <algorithm>
using namespace std;
int n, k, map[100]; // map 선언

bool isCan(int index){ // index는 지나가는 돌 들 중 가장 큰 수
    int cnt = 0, temp[100] = {0, };

    for(int i=0; i<n; i++){
        if(map[i] <= index){ // temp에 index보다 작은 수로만 설정
            temp[cnt++] = i; // i는  원래 map의 위치값이 저장됨
        }
    }

    for(int i=1; i<cnt; i++){
        int dis = temp[i] - temp[i-1]; // 모든 경우에 대해 거리가 만족한다면 index가 가능하다고 할 수 있음

        if(dis > k)
            return false;
    }
    return true;
}
int main() {
    cin >> n >> k;
    for(int i=0; i<n; i++) // map에 저장
        cin >> map[i];
    
    int answer = 21e8; // 큰 수 설정 

    for(int i=100; i>=max(map[0], map[n-1]); i--){ // 큰수부터 아래로 탐색, 큰수는 돌의 숫자 중 가장 큰 수를 의미
        if(isCan(i)) // 만약 그 큰 수로 가능한 경우를 만들 수 있다면 
            answer = min(answer, i); //가능 한 경우의 큰 수 중 가장 작은 값 
    }

    cout << answer;
    return 0;
}