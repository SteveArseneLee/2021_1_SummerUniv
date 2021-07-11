#include <stdio.h>
int main(){
    int x;
    printf("금액입력 : ");
    scanf("%d", &x);
    printf("%d\n", x);
    printf("%d 오만\n", x/50000);
    printf("%d 만\n", x%50000/10000);
    printf("%d 오천\n",x%10000/5000);
    printf("%d 천 ", x%5000/1000);
}