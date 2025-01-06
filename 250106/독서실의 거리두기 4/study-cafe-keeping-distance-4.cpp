#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int N;
string seat;

int max_dist = 0;
int main() {
    cin >> N;
    cin >> seat;

    for(int i=0; i<N; i++){
        int idx_L=0, idx_R=0;
        int dist = 0;
        if(seat[i]=='1' ){
            idx_L = i;

            for(int j=i+1; j<N; j++){
                if(seat[j]=='1'){
                    max_dist = max(max_dist, (j-i)/2);
                    break;
                }
            }

        }

    
    }cout << max_dist;
    return 0;
}