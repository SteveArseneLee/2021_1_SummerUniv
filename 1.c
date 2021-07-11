#include <stdio.h>
int main(){
    int i,j,sum = 0;
    int a[][3] = {{90,80,90}, {70,100,100}, {80,90,90}};
    double average[3];

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum += a[i][j];
        }
        average[i] = (double) sum/j;
        printf("%d번 학생의 평균은 %.2f\n", i+1,average[i]);
        sum = 0; // 다음학생의 평균을 구하기 위해 sum 초기화
    }
}