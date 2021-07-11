#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    for(int i = 1; i<10;i++)
        printf("%3d %7.1f %9.1f %9.1f\n", i, pow(i,2), pow(i,3), sqrt(i));
    printf("\n");
    printf("pow(2.72,1.0) == %5.2f\n", pow(2.72,1.0));
    printf("sqrt(64) == %5.2f\n", sqrt(64));
    printf("abs(-20) == %5d\n", abs(-20));
    printf("ceil(5.1) == %5.2f\n", ceil(5.1));
    printf("floor(3.9) == %5.2f\n", floor(3.9));
}