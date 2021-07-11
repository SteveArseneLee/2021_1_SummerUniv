#include <stdio.h>
int main(){
    int i,j;
    for(i=1;i<=9;i++)
    {
        printf("%d 단", i);
    }
    printf("\n");
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)
        {
            printf("%dx%d=%2d\n", i,j,i*j);
        }
        printf("\n");
    }
}