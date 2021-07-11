#include <stdio.h>
int main(){
    long fact = 1;
    int i,n;
    printf("정수를 입력하시오 : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
        fact *=i;
    printf("%d %d", n, fact);
}