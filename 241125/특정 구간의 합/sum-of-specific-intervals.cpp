#include <iostream>
using namespace std;

int arr[100];

int f(int a1, int a2, int arr[]){
    int sum=0;
    for(int i=a1-1; i<=a2-1;i++){
        sum+=arr[i];
    }
    return sum;
}
int main() {
    int n,m;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<m; i++){
        int a1,a2;
        cin >> a1 >> a2;
        cout << f(a1,a2,arr) << endl;
    }

    // 여기에 코드를 작성해주세요.
    return 0;
}