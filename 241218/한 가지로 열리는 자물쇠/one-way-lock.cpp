#include <iostream>
#include <cstdlib>
using namespace std;
int cnt = 0;

int main() {
    int N; cin >> N;
    int a, b, c; cin >> a >> b >> c;

    for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            for(int k=1; k<=N; k++){
                if(abs(a - i)<=2 || abs(b-j)<=2 || abs(c-k) <= 2) cnt++;
            }
        }
    }
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}