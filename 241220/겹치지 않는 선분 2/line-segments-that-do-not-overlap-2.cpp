#include <iostream>
using namespace std;

#define OFFSET 1000000

int x1Arr[100] = {};
int x2Arr[100] = {};
int arr[2000001] = {};
int cnt = 0; 

int main() {
    int N; cin >> N;

    for(int i=0; i<N; i++){
        cin >> x1Arr[i] >> x2Arr[i];
    }

    int countNonOverlap = 0;
    for(int i=0; i<N; i++){
        bool overlap = false;
        for(int j=0; j<N; j++){
            if(i == j) continue;
            // i번 선분: (x1Arr[i],0) - (x2Arr[i],1)
            // j번 선분: (x1Arr[j],0) - (x2Arr[j],1)
            // 교차 조건: (x1[i]<x1[j] && x2[i]>x2[j]) || (x1[i]>x1[j] && x2[i]<x2[j])
            if((x1Arr[i] < x1Arr[j] && x2Arr[i] > x2Arr[j]) ||
               (x1Arr[i] > x1Arr[j] && x2Arr[i] < x2Arr[j])) {
                overlap = true;
                break;
            }
        }
        if(!overlap) countNonOverlap++;
    }

    cout << countNonOverlap << "\n";
    return 0;
}
