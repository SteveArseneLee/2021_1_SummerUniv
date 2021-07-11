#include <stdio.h>
int main(){
    const int MAX = 5;
    for(int i = 1;i<=MAX;i++){
        for(char j = 'A';j<='A'+(i-1);j++)
            printf("%c",j);
        printf("\n");
    }
}