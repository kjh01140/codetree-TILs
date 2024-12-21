#include <iostream> // 상한 가능성이 있는 치즈들을 모두 찾고, 약은 그 치즈를 먹은 사람 수만큼 필요(최대값)
#include <algorithm>
using namespace std; //1번 반복문은 치즈의 순서대로 판단, 
                    //2번 반복문은 S명 각각 반드시 (아픈시간-1) 이전에 치즈를 먹었다면 의심치즈 선정
                    //1_indexed

int eat_record[1000][3] = {};
int sick_time[50][2] = {};

int ans = 0;


int main() {
    int N, M, D, S;
    cin >> N >> M >> D >> S; //사람의 수 N, 치즈의 수 M, 치즈를 먹은 기록의 수 D, 그리고 아픈 기록의 수 S
    
    for(int i=1; i<=D; i++) cin >> eat_record[i][0] >> eat_record[i][1] >> eat_record[i][2]; // 사람p, 치즈m, 시간t

    for(int i=1; i<=S; i++) cin >> sick_time[i][0] >> sick_time[i][1]; // 아픈사람p, 확실히 아픈 시간t
    // 여기까지 입력 과정




    for(int i=1; i<=M; i++){ // 1번 치즈부터 M번 치즈까지 상했을 가능성을 순차 판단
        bool possible = true;// 상한 치즈 가능 여부

        for(int k=1; k<=S; k++){ //  아픈 사람 판단
            int person = sick_time[k][0];
            int time_sick = sick_time[k][1];
            bool found = false; // 해당 치즈를 먹은 기록 발견

            for(int j=1; j<=D; j++){
                if(eat_record[j][1] == i && eat_record[j][0] == person){
                    if(eat_record[j][2] >= time_sick){
                        possible = false;
                    } else {
                        found = true;
                    }
                }
            }

            if(!found) possible = false;
            if(!possible) break;
        }
        if (possible) { // 가능한 치즈라면 먹은 사람 수 계산
            int cnt = 0;
            for (int j = 1; j <= D; j++) {
                if (eat_record[j][1] == i) cnt++;
            }
            ans = max(ans, cnt); // 최대값 갱신
        }


    }
    
    cout << ans;

    return 0;
}