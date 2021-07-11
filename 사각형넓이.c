#include <stdio.h>
int main(){
    float length, breadth;

    printf("가로와 세로 : ");
    scanf("%f %f", &length, &breadth);
    printf("사각형 넓이 %.4f\n", length*breadth);
}