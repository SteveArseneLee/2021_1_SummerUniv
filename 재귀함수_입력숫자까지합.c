#include <stdio.h>
int sum(int a);

int main(){
    int input, s=0;
    printf("양의 정수를 입력 : ");
    scanf("%d", &input);

    s= sum(input);
    printf("재귀함수를 이용한 1~%d까지 합 : %d\n", input, s);
}

int sum(int a)
{
    if(a<=1)
        return 1;
    else return a + sum(a-1);
}