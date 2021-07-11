#include <stdio.h>
int main(){
    int x, y;

    printf("두 정수를 입력 : ");
    scanf("%d %d", &x, &y);
    printf("합은 %d, 평균 %f\n", x+y, (float)(x+y)/2);
}