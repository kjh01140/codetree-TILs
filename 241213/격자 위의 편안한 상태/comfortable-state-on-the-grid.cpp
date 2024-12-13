#include <iostream>
using namespace std;
int N, M;
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

bool InRange(int r, int c){
    return 0<=r && r<N && 0<=c &&c<N;
}


bool check(int r, int c, int arr[1001][1001]){
    int cnt = 0;

    for(int i=0; i<4; i++){
        if(InRange(r,c) && arr[r+ dx[i]][c+ dy[i]] == 1) cnt++;
    }
    if(cnt == 3) return true;
    return false;
}




int main() {
    
    cin >> N >> M;
    int arr[1001][1001] = {};

    for(int i=0; i<M; i++){
        int r, c;
        cin >> r >> c;

        arr[r-1][c-1]=1;

        if(check(r-1, c-1, arr)){
            cout << 1 << endl;
        } else{ cout << 0 << endl;}

    }
    
    return 0;
}