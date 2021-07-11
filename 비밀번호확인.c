#include <stdio.h>
int main(){
    char secret[] = "1234";
    char input[10], number=0,i;

    while(number !=4){
        number = 0;
        printf("비밀번호 4자리 입력 \n");
        scanf("%s", &input);

        for(i=0;i<4;i++)
            if(input[i] == secret[i]) number++;
    }
    printf("비밀번호가 일치\n");
}