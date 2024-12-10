#include <iostream>
using namespace std;
#define Max_T  1000000


int Race(int a, int b){
    if(a>b) 
        return 1;  // a가 앞서면 1
    else if(a<b)
        return -1; // b가 앞서면 -1
    else 
        return 0; // 선두가 없으면 0
}

int N, M;
int pos_A[Max_T + 1], pos_B[Max_T + 1];

int main() {
    cin >> N >> M;

    int time_A = 1;
    for(int i=0; i<N; i++){
        char v; int t;
        cin >> v >> t;
        while(t--){
            pos_A[time_A] = pos_A[time_A - 1] +v ;
            time_A++;
        }
    }

    int time_B = 1;
    for(int i=0; i<M; i++){
        char v; int t;
        cin >> v >> t;
        while(t--){
            pos_B[time_B] = pos_B[time_B - 1] +v ;
            time_B++;
        }
    }

    int cnt=0;
    int condition = Race(pos_A[1],pos_B[1]); // 첫 선두 선정;

    for(int i=2; i<Max_T; i++){
        if( condition * Race(pos_A[i],pos_B[i]) <0 ){
            cnt++;
            condition = Race(pos_A[i],pos_B[i]);
        }
    }
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}