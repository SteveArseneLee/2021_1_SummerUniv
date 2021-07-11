#include <stdio.h>
int main(){
    int max, a, b,c;
    printf("세 정수를 입력 : ");
    scanf("%d %d %d", &a, &b, &c);

    if (a>b){
        if(a>c) max = a;
        else max = c;
    }else{
        if(b>c) max = b;
        else max = c;
    }
    printf("최대값은 %d\n", max);
}