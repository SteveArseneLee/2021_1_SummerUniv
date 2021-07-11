#include <stdio.h>
int main(){
    int i,temp;
    int numbers[5] = {11,22,33,44,55};
    for(i=0;i<5;i++)
        printf("%d ", numbers[i]);
    printf("\n");
    temp = numbers[3];
    numbers[3] = numbers[1];
    numbers[1] = temp;
    for(i=0;i<5;i++)
        printf("%d ", numbers[i]);
    printf("\n");
}