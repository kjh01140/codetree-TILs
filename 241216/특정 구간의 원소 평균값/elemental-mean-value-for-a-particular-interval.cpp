#include <iostream>
using namespace std;

int cnt = 0;
int arr[101] = {};
int main() {
    int N; cin >> N;

    for(int i=0; i<N; i++) cin >> arr[i];

    for(int i=0; i<N; i++){
        for(int j=i; j<N; j++){

            int sum = 0;
            bool check = false;

            for(int k=i; k<=j; k++){
                sum += arr[k]; 
            }
            
            for(int k=i; k<=j; k++){
                if(arr[k]*(j-i+1)==sum) check = true; 
            }

            if(check)cnt++;
            
        }

    }
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}