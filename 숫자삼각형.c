#include <stdio.h>
int main(){
    int number, i , j;
    printf("1~9까지 정수 : ");
    scanf("%d", &number);
    for(i=1;i<=number;i++){
        for(j=1;j<=i;j++){
            printf("%d", j);
        }
        printf("\n");
    }
}