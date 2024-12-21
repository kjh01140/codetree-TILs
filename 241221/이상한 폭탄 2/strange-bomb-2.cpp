#include <iostream>

#include <algorithm>
using namespace std;

int N , K; 
int arr[100] = {};
int ans = -1;

int Bomb(int bomb_idx){
    int lower_index = max(0, bomb_idx-K);
    int upper_index = min(N, bomb_idx+K);

    for(int x= lower_index; x<=upper_index; x++){
        if(x == bomb_idx) continue;
        if(arr[x] == arr[bomb_idx]) return arr[bomb_idx];
    }
    return -1;
}

int main() {
    cin >> N >> K;

    for(int i=1; i<=N; i++){
        cin >> arr[i];
    }

    for(int i=1; i<=N ;i++){
        ans = max(ans, Bomb(i));
    }
    cout << ans;
    // 여기에 코드를 작성해주세요.
    return 0;
}