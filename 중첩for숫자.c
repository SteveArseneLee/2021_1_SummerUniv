#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define MAX 7
int main(){
    int i , j;
    for(i=0;i<=MAX;i++)
    {
        for(j=MAX;j>=-MAX;j--)
        {
            if(abs(j)>i)
                printf(" ");
            else
                printf("%d", abs(j));
        }
        printf("\n");
    }
}