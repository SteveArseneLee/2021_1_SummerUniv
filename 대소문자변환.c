#include <stdio.h>
void upper_case(char ch);

int main(){
    char ch1, ch2;
    while((ch1=getchar()) != EOF){
        upper_case(ch1);
    }
}

void upper_case(char ch)
{
    char res;
    if(ch>='a' && ch<='z')
        res = ch - 32;
    else
        res = ch;
    putchar(res);
}