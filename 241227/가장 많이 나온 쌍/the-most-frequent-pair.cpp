#include <iostream>
#include <algorithm>

using namespace std;
int arr[100][2]={};


int main() {
    int n, m; cin >> n >> m;
    int idx= 0;
    int freq = 0;

    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        if(a < b) swap(a, b);
        int key = a * 10 + b;

        bool found = false;
        for(int j=0; j<idx; j++){

            if(arr[j][0] == key){
                arr[j][1]++;
                freq = max(freq, arr[j][1]);
                found = true;
                break;

            } 
            
            
        }
        if(!found){
                arr[idx][0] =key;
                arr[idx][1] = 1;
                freq = max(freq, 1);
                idx++;
            }
    }

    cout << freq;

    // 여기에 코드를 작성해주세요.
    return 0;
}