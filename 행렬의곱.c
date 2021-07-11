#include <stdio.h>
int main(){
    int matrix1[3][2] = {{3,5}, {7,9}, {1,3}};
    int matrix2[2][3] = {{2,4,6}, {8,2,4}};
    int result[3][3] = {0};
    int i,j,k;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<2;k++){
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%4d", result[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}