#include <stdio.h>

int main() {
    int a, b;
	scanf("%d %d", &a, &b);

    printf("%d.",a/b);//정수부분

    //소수점 자리 하나씩 계산하겠다.
    a=a%b; //a를 "a를 b로 나눴을때 나머지로 최신화"

    for (int i=0;i<20;i++){//20번 반복한다는 의미
        a*=10;
        printf("%d",a/b); //나머지에 10을 곱한값을 b로 나눴을때 몫
        a=a%b; //나머지에 10을 곱한값을 b로 나눴을때 나머지를 다시a에 최신화

    }
    return 0;
}