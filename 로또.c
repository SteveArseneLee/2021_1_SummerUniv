#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 45
int getnumber(int n);

int main(){
   int n1, n2, n3, n4, n5;
   srand((unsigned)time(NULL));
   n1 = getnumber(MAX);
   do{
      n2 = getnumber(MAX);
   } while(n2 == n1);
   do{
      n3 = getnumber(MAX);
   } while(n3 == n1 || n3 == n2);
   do{
      n4 = getnumber(MAX);
   } while(n4 == n1 || n4 == n2 || n4 == n3);
   do{
      n5 = getnumber(MAX);
   } while(n5 == n1 || n5 == n2 || n5 == n3 || n5 == n4);
   printf("로또 당첨 번호는 %d, %d, %d, %d, %d입니다.\n", n1,n2,n3,n4,n5);
   return 0;
}
int getnumber(int n)
{
   return rand() % n+1;
}