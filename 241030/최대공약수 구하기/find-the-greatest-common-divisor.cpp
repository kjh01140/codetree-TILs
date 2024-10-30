#include <iostream>
using namespace std;

void Func(int n,int m){
    int max=0;
    for (int i=1; i<=m && i<=n; i++){
        
        if(m%i==0 && n%i==0){
            max=i;
        }
    }
    cout << max;
}

int main() {
    int m , n;
    cin >> n >> m;
    Func(n,m);
    // 여기에 코드를 작성해주세요.
    return 0;
}