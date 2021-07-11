#include <stdio.h>
int main(){
    int i, sum, max;
    printf("정수 입력 : ");
    scanf("%d", &max);
    for(i=1, sum =0; i<=max;i++)
        sum +=i;
    printf("for문  : %3d\n", sum);
    while(i<=max){
        sum +=i;
        i++;
    }
    printf("while문 : %3d\n", sum);
}