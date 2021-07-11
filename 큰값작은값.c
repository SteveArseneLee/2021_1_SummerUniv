#include <stdio.h>

int main(){
    int min, max, x,y ;
    printf("숫자 2개 입력 ");
    scanf("%d %d", &x, &y);
    if(x>y){
        max = x;
        min = y;
    }
    else {
        max = y;
        min = x;
    }
    printf("%d ", max);
}