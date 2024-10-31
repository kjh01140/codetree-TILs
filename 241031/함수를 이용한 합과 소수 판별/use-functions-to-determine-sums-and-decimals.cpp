#include <iostream>
using namespace std;

bool Only(int n){
    if (n <= 1) return false;

    for(int i=2;i<n;i++){

        if(n % i == 0){
            return false;
        } 
    }
    return true; 
}

bool Sum(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    if(sum%2==0){
        return true;
    } else{
        return false;
    }
}


int main() {
    int a,b,cnt=0;
    cin >> a >> b;
    for(int i=a; i<=b; i++){
        if(Only(i) && Sum(i))cnt++;

    }
    cout << cnt;
    // 여기에 코드를 작성해주세요.
    return 0;
}