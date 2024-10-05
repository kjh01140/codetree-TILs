#include <stdio.h>

int main() {
    int idx=-1,arr[6]={'L', 'E', 'B', 'R', 'O', 'S'};
    char I;
    scanf("%c",&I);

    for(int i=0;i<6;i++ ){
        if(I==arr[i]){
            idx=i;
        } 
    }

    printf( idx==-1 ? "None" : "%d",idx);

    // 여기에 코드를 작성해주세요.
    return 0;
}