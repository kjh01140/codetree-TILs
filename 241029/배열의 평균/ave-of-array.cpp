#include <iostream>
using namespace std;

int main() {
    int arr[2][4];
    for(int i=0;i<2;i++){
        for(int j=0; j<4; j++){
            cin >> arr[i][j];    
        }
    }

    cout << fixed;
    cout.precision(1);

    for(int i=0;i<2;i++){
        double sum=0;
        for(int j=0; j<4; j++){
            sum+= arr[i][j];    
        }
        cout << sum/4 << " ";
    }
    cout << "\n";
    
    for(int j=0;j<4;j++){
        double sum=0;
        for(int i=0; i<2; i++){
            sum+= arr[i][j];    
        }
        cout << sum/2 << " ";
    }
    cout << "\n";

    double sum=0;
    for(int i=0;i<2;i++){
        for(int j=0; j<4; j++){
            sum+= arr[i][j];    
        }
    }
    cout << sum/8 ;
    return 0;
}