#include <stdio.h>
int main(){
    int answer = 77;
    int guess;
    int tries = 0;
    do{
        printf("정답을 추측 : ");
        scanf("%d", &guess);
        tries++;

        if(guess > answer)
            printf("제시한 점수가 높다\n");
        if(guess < answer)
            printf("제시한 점수가 낮음\n");
    }while (guess != answer);
    printf("축하합니다.%d",tries);
}