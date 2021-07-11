#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c;
    printf("두 실수 a,b 입력 ");
    scanf("%lf %lf", &a, &b );
    c=sqrt(pow(a,2) + pow(b,2));
    printf("c = %10.3lf\n", c);
}