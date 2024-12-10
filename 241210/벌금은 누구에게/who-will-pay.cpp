#include <iostream>
using namespace std;

int main() {
    int N, M ,K;
    cin >> N >> M >> K;
  
    
    int students[101] = {0}; //{0, 1번학생, 2번학생, ... ,N번 학생}

    for(int i=0; i<M; i++){
        int num;
        cin >> num;
        students[num]++;
        for(int j=1; j<=N; j++){
            if(students[j] >= K){
                cout << j;
                return 0;
            }
        }
    }


    cout << -1;
    

 
    
    // 여기에 코드를 작성해주세요.
    return 0;
}