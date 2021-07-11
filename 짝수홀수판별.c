#include <stdio.h>
int main(){
    int input;
    printf("양수를 입력하세요 \n");
    scanf("%d", &input);
    if(input%2==0)
        printf("%d는 짝수", input);
    else
        printf("%d는 홀수", input);
}