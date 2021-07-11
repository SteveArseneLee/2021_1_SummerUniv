#include <stdio.h>
int main(){
    int i ,j;
    for(i=1;i<6;i++){
        for(j=i;j<6;j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    for(i=1;i<6;i++){
        if(i%2==0) continue;
        for(j=i;j<6;j++){
            printf("*");
        }
        printf("\n");
    }
}