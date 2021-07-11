#include <stdio.h>
int Integral(int start, int end);
int main(){
    int result = 0, i;

    printf("함수를 사용하지 않고 합\n");
    for(i=1;i<=10;i++)
        result += i;
    printf("1부터 10까지 합 %d\n", result);
    result =0;
    for(i=7;i<=17;i++)
        result += i;
    printf("7부터 17까지 합은 %d", result);
    printf("\n함수를 사용해 합을 구함\n");
    printf("1부터 10까지의 합은 %d\n", Integral(1,10));
    printf("7부터 17까지의 합은 %d\n", Integral(7,17));
}
int Integral(int start, int end)
{
    int sum=0,i;
    for(i=start;i<=end;i++)
        sum += i;
    return sum;
}