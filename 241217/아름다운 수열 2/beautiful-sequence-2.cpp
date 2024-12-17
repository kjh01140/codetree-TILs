#include <iostream>
using namespace std;
int A[100] = {};
int B[100] = {};
int N, M, cnt = 0;

int Num[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int Num_B[10] = {0,}; //즉 순서는 중요치 않고 쓰인 숫자들의 갯수가 중요함


bool Check(int idx, int A[100], int B[100]){ // idx는 시작지점
    int Num_A[10]={0,}; //초기화

    for(int i=0; i<M; i++){
        for(int j=0; j<M; j++){ 
            if(A[idx + i] == B[j]) Num_A[B[j]]++;
        }
        

    }
    for(int i=0; i<10; i++){
        if(Num_A[i] != Num_B[i]) return false;
    }
    return true;
}

int main() {
    cin >> N >> M;

    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    for(int i=0; i<M; i++){
        cin >> B[i];
        for(int j=0; j<10; j++){
            if(B[i] == Num[j])Num_B[j]++;
        }
    }

    


    for(int i=0; i<=N-M; i++){ // 시작지점 기준
        if(Check(i, A, B))cnt++;
    }

    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}