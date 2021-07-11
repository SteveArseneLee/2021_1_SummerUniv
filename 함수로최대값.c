#include <stdio.h>
int max(int, int, int);
int main(){
    int x, y, z;
    printf("세 개의 정수를 입력 : ");
    scanf("%d %d %d", &x, &y, &z);
    printf("\n입력한 세 개 정수 %d, %d, %d중 가장 큰 정수는 ", x,y,z);
    printf("%d", max(x,y,z));
}

int max(int x, int y, int z)
{
    int result;
    result = x>y ? (x>z ? x:z) : (y>z ? y:z);
    return result;
}