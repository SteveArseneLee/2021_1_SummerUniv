#include <stdio.h>

int main(){
    int i,j,sum=0;
    int a[2][2] = {5,20,12,7};

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            sum += a[i][j];
        }
    }
    printf("2차원 배열의 합은 %d", sum);
}