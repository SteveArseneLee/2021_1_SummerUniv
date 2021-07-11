#include <stdio.h>
int main(){
    int number, divisor, limit, count = 0;
    printf("2보다 큰 정수를 입력 : ");
    scanf("%d", &limit);
    printf("\n2부터 %d까지의 소수 \n", limit);
    for(number = 2; number <= limit;number++)
    {
        for(divisor = 2; number % divisor != 0; divisor++);
        if(divisor == number)
        {
            printf("%3d%c", number, (++count %10 ? ' ': '\n'));
        }
    }
    printf("\n");
}