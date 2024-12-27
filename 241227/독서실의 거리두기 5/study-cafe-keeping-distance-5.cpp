#include <iostream>
//#include <cstdlib>
//#include <cstring>
#include <algorithm>
using namespace std;

int ans = 0;
int N;
string temp;

// (한 명 앉힌 뒤) 모든 '1' 쌍 사이의 "거리" 중 최솟값을 구해주는 함수
int Max_Dis(){
    // 아주 큰 수로 초기화
    int minDist = 1e9;

    // i번째가 '1'이면, 그 다음 j번째 '1'과의 거리 중 최솊값을 갱신
    for(int i = 0; i < N; i++){
        if(temp[i] == '1'){
            for(int j = i+1; j < N; j++){
                if(temp[j] == '1'){
                    // 더 작은 거리를 찾으면 갱신
                    minDist = min(minDist, j - i);
                    // 바로 다음 '1'을 찾으면 break
                    break;
                }
            }
        }
    }

    // 만약 '1'이 0개나 1개뿐이라 minDist가 갱신되지 않았다면 0 리턴(혹은 적절한 처리)
    if(minDist == 1000000000) return 0;

    return minDist;
}

int main() {
    cin >> N;
    string seats;
    cin >> seats;

    for(int i = 0; i < N; i++){
        // 원본 문자열을 복사 (strcpy → = 연산자)
        temp = seats;

        // 원래 '0'인 곳만 '1'로 바꿔보고 시도
        if(temp[i] == '0'){
            temp[i] = '1';
            // 그때의 “가장 가까운 두 사람 사이 거리”를 구하고, 그 최솟값의 최댓값을 찾음
            ans = max(ans, Max_Dis());
        }
    }

    cout << ans << endl;
    return 0;
}
