#include <stdio.h>
int main(){
    int i , j, index, input;
    printf("임의의 정수 : ");
    scanf("%d", &input);
    for(i=1;i<=input;i++){
        index = 0;
        for(j=1;j<=i;j++){
            if(i%j==0)
                index++;
        }
        if(index==2)
            printf("%d\n", i);
    }
}