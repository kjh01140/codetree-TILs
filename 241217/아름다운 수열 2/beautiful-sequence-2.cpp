#include <iostream>
using namespace std;
int A[100] = {};
int B[100] = {};
int N, M, cnt = 0;

bool Check(int idx, int A[100], int B[100]){ // idx는 시작지점
    int arr[M]={0,}; // B의 무슨 인자가 쓰였는지 저장
    for(int i=0; i<M; i++){
        for(int j=0; j<M; j++){ 
            if(A[idx + i] == B[j]) arr[j]++;
        }
        

    }
    for(int i=0; i<M; i++){
        if(arr[i]!=1) return false;
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
    }


    for(int i=0; i<=N-M; i++){ // 시작지점 기준
        if(Check(i, A, B))cnt++;
    }

    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}