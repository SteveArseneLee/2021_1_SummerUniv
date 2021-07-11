#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand((unsigned) time(NULL));
    printf("1~100까지의 난수 5개 : \n");
    for(int i =0;i<5;i++)
        printf("%5d", rand()%100 + 1);
    printf("\t");
}