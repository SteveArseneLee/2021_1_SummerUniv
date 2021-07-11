#include <stdio.h>
int main(){
    int i,j,temp;
    int num[9] = {77,22,99,11,33,88,66,44,55};
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            if(num[j] > num[j+1]){
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }
    for(i=0;i<9;i++){
        printf("%d ", num[i]);
    }
    printf("\n");
}