#include <stdio.h>

int main() {
    int cnt_arr[5]={0,},t;
    char C;
    for(int i=0;i<3;i++){
        scanf(" %c %d",&C,&t);
       
       
        if(C=='Y'){
            if(t>=37){
                cnt_arr[1]++;
            } else{
                cnt_arr[3]++;
            }
            
        } else {
            if(t>=37){
                cnt_arr[2]++;
            } else{
                cnt_arr[4]++;
            }
        }

    }
    
    for(int i=1;i<=4;i++){
            printf("%d ",cnt_arr[i]);
    }
    if(cnt_arr[1]>=2){
        printf("E");
    } 
    // 여기에 코드를 작성해주세요.
    return 0;
}