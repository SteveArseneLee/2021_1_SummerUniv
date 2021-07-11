#include <stdio.h>
int main(){
    int input[20] = {0};
    printf("배열에 저장할 정수 여러개 입력. 0을 입력하면 입력종료\n");
    int i = 0;
    do{
        scanf("%d", &input[i]);
    }while(input[i++] != 0);
    i = 0;
    while(input[i] != 0){
        printf("%d ", input[i++]);
    }
    printf("\n");
}