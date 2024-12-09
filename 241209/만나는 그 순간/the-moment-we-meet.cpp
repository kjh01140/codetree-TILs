#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    
    int A_cood = 0;
    int B_cood = 0;
    
    
    int max_total_time = 1000 * max(N,M);

    int A_move[max_total_time] = {};
    int B_move[max_total_time] = {};

    for(int i=0; i<N; i++){ //A_move 저장과정
        char d; int t;
        cin >> d >> t;
        

        if(d == 'R'){
            for(int j = A_cood; j < A_cood + t; j++){
                A_move[j]= 1;
            }
            A_cood += t;

        } else{
            for(int j = A_cood; j < A_cood + t; j++){
                A_move[j]= -1;
            }
            A_cood += t;
        }

    }

    for(int i=0; i<M; i++){ //B_move 저장과정
        char d; int t;
        cin >> d >> t;

        if(d == 'R'){
            for(int j = B_cood; j < B_cood + t; j++){
                B_move[j]= 1;
            }
            B_cood += t;

        } else{
            for(int j = B_cood; j < B_cood + t; j++){
                B_move[j]= -1;
            }
            B_cood += t;
        }

    }
    bool check = true;
    for(int i=0; i<max_total_time; i++){
        A_cood += A_move[i];
        B_cood += B_move[i];

        if(A_cood == B_cood) {
            cout << i+1;
            check = false;
            break;
        } 
    } 
    if(check) cout << -1;
    // 여기에 코드를 작성해주세요.
    return 0;
}