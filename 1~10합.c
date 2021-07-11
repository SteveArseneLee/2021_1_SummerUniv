#include <stdio.h>
int main(){
    int sum = 0;
    int number = 0;

    printf("1에서 10까지 합 \n");
    do{
        number++;
        sum += number;
    }while(number<10);
    printf("%d\n", sum);
}