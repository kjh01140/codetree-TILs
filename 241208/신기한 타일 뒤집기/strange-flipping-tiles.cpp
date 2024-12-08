#include <iostream>


using namespace std;

const int OFFSET = 100000; // 좌표 오프셋
const int MAX_COORD = 2 * OFFSET + 1; // 전체 좌표 크기

int n;
int color[MAX_COORD];         // 현재 색상 (1: 흰색, 2: 검은색, 회색은 카운팅에 따름)
int painted_white[MAX_COORD]; // 흰색 칠한 횟수
int painted_black[MAX_COORD]; // 검은색 칠한 횟수
int white_count = 0;          // 흰색 타일 개수
int black_count = 0;          // 검은색 타일 개수


int main() {
    // 입력 처리
    cin >> n;

    int curr = OFFSET; // 현재 위치 (중앙 시작)

    for (int i = 1; i <= n; i++) {
        int x;
        char dir;
        cin >> x >> dir;

        if (dir == 'L') { // 왼쪽으로 칠하기
            while (x--) {
                color[curr] = 1; // 흰색으로 칠함
                painted_white[curr]++;
                if (x) curr--; // 이동
            }
        } else { // 오른쪽으로 칠하기
            while (x--) {
                color[curr] = 2; // 검은색으로 칠함
                painted_black[curr]++;
                if (x) curr++; // 이동
            }
        }
    }

    for (int i = 0; i < MAX_COORD; i++) {
        
         if (color[i] == 1) {
            white_count++;
        }
        // 검은색 타일
        else if (color[i] == 2) {
            black_count++;
        }
    }

    // 결과 출력
    cout << white_count << " " << black_count ;

    return 0;
}
