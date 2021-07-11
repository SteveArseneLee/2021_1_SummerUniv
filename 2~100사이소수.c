#include <stdio.h>
int main(){
    int i , j, count = 0;
    for(i=2;i<=100;++i){
        for(j=2;j<i;++j){
            if(i%j==0)
                break;
        }
        if(j==i){
            count++;
            printf("%2d%s", i ,count%5 ? " ":"\n");
        }
    }
}