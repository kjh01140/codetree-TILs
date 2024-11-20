#include <iostream>
using namespace std;

bool CheckYear(int Y) {
    return (Y % 4 == 0 && (Y % 100 != 0 || Y % 400 == 0));
}

bool CheckExist(int Y,int M,int D){
    if(M==2){   //2월일때
        if(CheckYear(Y)){ //윤년일때
            if(D<=29){
                return true;
            } else{
                return false;
            }
        } else{ // 윤년이 아닐때
            if(D<=28){
                return true;
            } else{
                return false;
            }

        }

    } else{ //2월이 아닐때
        if(M<=7){
            if(M%2==0){
                if(D<=30){
                    return true;
                } else{
                    return false;
                }
            } else{
                if(D<=31){
                    return true;
                } else{
                    return false;
                }

            }
        } else{
            if(M%2==1){
                if(D<=30){
                    return true;
                } else{
                    return false;
                }
            } else{
                if(D<=31){
                    return true;
                } else{
                    return false;
                }

            }

        }
    }

}

void Season(int M) {
    if (M >= 3 && M <= 5) cout << "Spring";
    else if (M >= 6 && M <= 8) cout << "Summer";
    else if (M >= 9 && M <= 11) cout << "Fall";
    else cout << "Winter";
}
int main() {
    int Y,M,D;
    cin >> Y >> M >> D;
    if(CheckExist(Y,M,D)){
        Season(M);

    } else{
        cout << -1;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}