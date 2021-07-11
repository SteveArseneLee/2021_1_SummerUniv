#include <stdio.h>
double CtoF(double);

int main(){
    double i;
    for(i=0;i<=100;i+=5)
        printf("섭씨온도 = %.2f 화씨온도 = %.2f\n", i, CtoF(i));
    return 0;
}

double CtoF(double c)
{
    double f = (9.0/5*c+32);
    return f;
}