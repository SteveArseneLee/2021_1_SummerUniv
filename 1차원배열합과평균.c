#include <stdio.h>
int main(){
    int A[5] = {1,2,3,4,5};
    int i,sum=0;
    double average;

    for(i=0;i<5;i++)
        sum += A[i];
    average = (double)sum/i;

    printf("%d\t%4.2lf",sum,average);
}