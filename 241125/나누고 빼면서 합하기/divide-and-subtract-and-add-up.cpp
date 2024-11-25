#include <iostream>
using namespace std;
int sum=0;

void Func(int &m,int arr[]){
    if(m%2==1){
        sum+=arr[m-1];
        m-=1;
    } else{
        sum+=arr[m-1];
        m/=2;
    }
}


int main() {
    int n,m;
    cin >> n >> m;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    while(m!=1){
        Func(m,arr);

    }
    sum += arr[0]; // 마지막으로 첫 번째 요소를 더함
    cout << sum;
    // 여기에 코드를 작성해주세요.
    return 0;
}