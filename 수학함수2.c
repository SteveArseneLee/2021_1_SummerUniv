#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(){
    srand((unsigned)time(NULL));
    double a,b,c;
    printf("1~10 사이의 두개의 난수 a,b입력\n");

    a=rand()%10 + 1;
    b=rand()%10 + 1;
    c=sqrt(pow(a,2)+pow(b,2));
    printf("a = %7.3lf\n",a);
    printf("a = %7.3lf\n",b);
    printf("a = %7.3lf\n",c);
}