#include <stdio.h>
int main(){
    int temp;
    printf("섭씨 온도를 입력하세요 \n");
    scanf("%d", &temp);
    printf("%d는 %.2lf", temp, temp*1.8+32);
}