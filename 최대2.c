#include <stdio.h>
int main(){
    int max, a, b,c;
    printf("세 정수 입력 : ");
    scanf("%d %d %d", &a,&b,&c);
    max = (a>b) ?((a>c)?a:c) : ((b>c)?b:c);
    printf("최대값 %d", max);
}