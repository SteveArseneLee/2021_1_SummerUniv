#include <stdio.h>
int main(){
    int a= 1, sum =0;
    while(sum < 300){
        sum +=a;
        a++;
        printf("%d\t%d\n", a,sum);
    }
    printf("합이 300넘는 a의 최소값 %d\n", a-1);
    printf("sum = %d\n", sum);
}