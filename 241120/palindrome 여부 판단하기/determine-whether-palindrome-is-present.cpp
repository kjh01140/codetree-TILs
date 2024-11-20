#include <iostream>
#include <string>
using namespace std;

bool CheckP(string *s,int length){
    
    for(int i=0;i<length;i++){
        if(*(s+i)==*(s+length-1-i)){
            continue;
        } else{
            return false;
            
        }
    }
    return true;

}

int main() {
    int length=0;

    string arr[100];
    for(int i=0;i<100 ;i++){
        cin >> arr[i];
        if(arr[i]=="END"){
            length = i;
            break;
        }
    }



    if(CheckP(arr,length)){
        cout << "Yes";
    } else{
        cout << "No";
    }
    
    

    // 여기에 코드를 작성해주세요.
    return 0;
}