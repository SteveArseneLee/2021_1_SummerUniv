#include <stdio.h>
int main(){
    long fact = 1;
    int i = 1, n;
    printf("정수를 입력 : ");
    scanf("%d", &n);
    while(i<=n)
    {
        fact = fact *i;
        i++;
    }
    printf("%d %d\n", n,fact);
}