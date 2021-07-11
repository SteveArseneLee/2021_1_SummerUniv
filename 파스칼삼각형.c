#include <stdio.h>
int factorial(int n);
int combi(int n, int r);
void printarray(int data[][10], int rowsize, int colsize);

int main(){
    int pascal[10][10] = {0};
    int i,j;
    for(i=0;i<10;i++)
        for(j=0;j<=i;j++)
            pascal[i][j] = combi(i,j);
    printarray(pascal,10,10);
    return 0;
}

int factorial(int n)
{
    int i=1,mult=1;
    if(n==0) return 1;
    for(i=1;i<=n;i++)
        mult *= i;
    return mult;
}

int combi(int n, int r)
{
    return (factorial(n) / (factorial(r)*factorial(n-r)));
}

void printarray(int data[][10], int rowsize, int colsize)
{
    int i,j;
    for(i=0;i<rowsize;i++)
    {
        for(j=0;j<=i;j++)
            printf("%d ", data[i][j]);
        printf("\n");
    }
}