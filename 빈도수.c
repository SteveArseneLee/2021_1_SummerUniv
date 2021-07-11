#include <stdio.h>
int main(){
    int frequency[10] = {0};
    int data[20], i;
    for(i=0;i<20;i++){
        printf("%2d 번째 정수 : ", i+1);
        scanf("%d", &data[i]);
        frequency[data[i]]++;
    }
    printf("\n");
    int max = frequency[0];
    for(i=1;i<10;i++)
    {
        if(max<frequency[i])
            max = frequency[i];
    }
    for(i=0;i<10;i++)
    {
        if(max==frequency[i])
            printf("정수 : %d, 최대 빈도수 : %d회",i,max);
    }
}