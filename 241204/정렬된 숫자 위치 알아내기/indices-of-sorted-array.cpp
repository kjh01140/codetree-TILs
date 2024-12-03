#include <iostream>
#include <algorithm>
using namespace std;
class Data{
    public:
        int input, output, idx;
        Data(int input, int output, int idx){ //숫자 
            this -> input=input;
            this -> output=output;
            this -> idx=idx;
        }
        Data(){}
};

bool cmp(Data a, Data b){
    return a.input < b.input;
}
bool cmp2(Data a, Data b){
    return a.output < b.output;
}


int main() {
    int n;
    cin >> n;
    Data datas[n];
    for(int i=0; i<n; i++){
        int input;
        cin >> input;
        datas[i] = Data(input, i+1, 0);
    }
    sort(datas,datas+n,cmp);

    for(int i=0; i<n; i++){
        datas[i].idx=i+1;
    }
    sort(datas,datas+n,cmp2);

    for(int i=0; i<n; i++){
        cout << datas[i].idx<<" ";
    }





    
    // 여기에 코드를 작성해주세요.
    return 0;
}