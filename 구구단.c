#include <stdio.h>
#define MAX 9
int main(){
    printf("구구단 \n");
    for(int i =2; i<=MAX;i++)
    {
        printf("%6d단", i);
        for(int j = 2; j<=MAX;j++)
            printf("%d*%d = %2d\t", i,j,i*j);
        printf("\n");
    }
}