#include <stdio.h>
int main(){
    double b[] = {2.3,3.0,4.1,5.5};
    int a[4] = {10,20,30,40};
    int i, aryLenDouble,aryLenInt;

    aryLenDouble = sizeof(b) / sizeof(double);
    aryLenInt = sizeof(a) / sizeof(int);
    printf("\n\n\n\n\n");
    printf("double형 배열 원소의 주소를 출력하면 \n");

    for(i=0;i<aryLenDouble;i++)
    {
        printf("b + %d = %p\n", i, b+i);
    }
    printf("int형 배열 원소의 주소를 출력하면 \n");
    for(i=0;i<aryLenInt;i++)
    {
        printf("a+%d = %p\n", i,a+i);
    }
}