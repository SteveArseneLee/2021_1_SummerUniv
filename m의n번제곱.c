#include <stdio.h>
int intpow(int m, int n);
int main(){
    int m,n;
    printf("정수 m 입력 : ");
    scanf("%d", &m);
    printf("정수 n 입력 : ");
    scanf("%d", &n);
    printf("%d",intpow(m,n));
}
int intpow(int m, int n)
{
    int mult=1,i=1;
    for(i=1;i<=n;i++)
        mult *= m;
    return mult;
}