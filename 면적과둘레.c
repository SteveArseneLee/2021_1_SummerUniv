#include <stdio.h>
#define PI 3.14
double area (float r);
double circumference(float r);

int main(){
    float r;
    printf("반지름 입력 : ");
    scanf("%f", &r);
    printf("\n반지름이 %.2f인 원의 면적은 %.3lf\n", r, area(r));
    printf("반지름이 %.2f인 원의 길이는 %.3lf\n", r, circumference(r));
    return 0;
}

double area(float r){
    double result;
    result = r*r*PI;
    return result;
}
double circumference(float r){
    double result;
    result = 2 *PI*r;
    return result;
}