#include <stdio.h>
int main(){
    int digit, n, sum =0;
    scanf("%d", &n);
    do{
        digit = n%10;
        sum += digit;
        n/=10;
        printf("digit : %d\tsum:%d\n",digit,sum);
    }while(n>0);
    printf("%d\n", sum);
}