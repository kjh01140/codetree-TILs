#include <iostream>
using namespace std;

int arr_a[10] = {}; // 선분의 시작지점
int arr_b[10] = {}; // 선분의 종료지점

int arr[101] = {0,}; // 선분의 유무 저장

int cnt = 0; // 가짓수

int main() {
    int n; cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr_a[i] >> arr_b[i];
        for(int j=arr_a[i]; j<=arr_b[i]; j++){
            arr[j]++;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){

                
                if(i != j && j != k && k != i){

                    bool check1 = true;
                    for(int l = arr_a[i]; l <= arr_b[i]; l++) arr[l]--;
                    for(int l = arr_a[j]; l <= arr_b[j]; l++) arr[l]--;
                    for(int l = arr_a[k]; l <= arr_b[k]; l++) arr[l]--;
                    
                    
                    for(int t=0; t<=100; t++){
                        if(arr[t] >1) {
                            check1 = false;
                            break;
                        }
                    }
                    
                    if(check1) {
                        for(int l = arr_a[i]; l <= arr_b[i]; l++) arr[l]++;
                        for(int l = arr_a[j]; l <= arr_b[j]; l++) arr[l]++;
                        for(int l = arr_a[k]; l <= arr_b[k]; l++) arr[l]++;
                        cnt++;
                    } else{
                        for(int l = arr_a[i]; l <= arr_b[i]; l++) arr[l]++;
                        for(int l = arr_a[j]; l <= arr_b[j]; l++) arr[l]++;
                        for(int l = arr_a[k]; l <= arr_b[k]; l++) arr[l]++;
                    }
                }
                
            }
        }
    }
    cout  << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}