#include <stdio.h>

int main() {
    char arr[5][20] = {  "apple", "banana", "grape", "blueberry", "orange" };
    char a;
    int cnt=0;
    scanf("%c",&a);

    for(int i=0;i<5;i++){
        if(a==arr[i][3]||a==arr[i][2]){
            printf("%s\n",arr[i]);
            cnt++;
        }
    }
    printf("%d",cnt);

    // 여기에 코드를 작성해주세요.
    return 0;
}