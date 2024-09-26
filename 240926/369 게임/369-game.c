#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
for(int i=1; i<=n;i++){
    if(i==40||i==70){
        printf("%d ",i);
    }
    

    if(i>=30&&i<=39 || i>=60&&i<=69 || i>=90&&i<=99){
        printf("%d ",0);
    }


    if( i>=1&&i<=10 ){
        if(i%3==0){
            printf("%d ",0);
        } else{printf("%d ",i);}
    }
    if( i>10&&i<=20 ){
        if(i==12){
            printf("%d ",0);
        }
        else if((i-10)%3==0){
            printf("%d ",0);
        } else{printf("%d ",i);}
    }
    if( i>20&&i<30 ){
        if((i-20)%3==0){
            printf("%d ",0);
        } else{printf("%d ",i);}
    }if( i>40&&i<=50 ){
        if((i-40)%3==0){
            printf("%d ",0);
        } else{printf("%d ",i);}
    }if( i>50&&i<60 ){
        if((i-50)%3==0){
            printf("%d ",0);
        } else{printf("%d ",i);}
    }
    if( i>70&&i<=80 ){
        if((i-70)%3==0){
            printf("%d ",0);
        } else{printf("%d ",i);}
    }
    if( i>80&&i<90 ){
        if((i-80)%3==0){
            printf("%d ",0);
        } else{printf("%d ",i);}
    }
}

    // 여기에 코드를 작성해주세요.
    return 0;
}