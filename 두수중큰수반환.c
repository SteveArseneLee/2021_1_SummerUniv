#include <stdio.h>
int max(int x, int y);
int main(){
    int x, y;
    printf("정수 입력 : ");
    scanf("%d", &x);
    printf("정수 입력 : ");
    scanf("%d", &y);
    printf("입력한 정수 중 큰 정수는 %3d\n", max(x,y));
}

int max(int x, int y)
{
    int z;
    if(x>y)
        z= x;
    else z = y;
    return z;
}