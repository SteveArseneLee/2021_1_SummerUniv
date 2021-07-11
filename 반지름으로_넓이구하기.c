#include <stdio.h>
#define PIE 3.141592
int main(){
    double r;
    printf("반지름을 입력 : ");
    scanf("%lf", &r);
    printf("%.5lf\n", PIE*r*r);
}